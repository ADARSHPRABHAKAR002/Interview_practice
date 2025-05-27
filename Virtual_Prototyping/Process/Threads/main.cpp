// Q1. Develop the model of a forwarder with a delay. It will have 
// - Two input pins: IN pin of type integer & STROBE pin of boolean type
// - One output pin: OUT pin of type integer

// Whenever STROBE changes from 0 to 1, it will place the value of IN on the OUT after a delay of 2 ns

// Test bench: Applies the values at input port at following times:
// 0 ns: IN= 0, STROBE= 0
// 5ns: IN=5, STROBE= 1
// 6ns: STROBE=0
// 8ns: IN=8, STROBE= 1
// 9ns: STROBE=0
// 15ns: IN=15, STROBE= 1
// 16ns: STROBE=0
   
// Whenever the value changes at the OUT pin, the testbench should print the value of this port and the simulation time

// using thread

#include <systemc.h>

SC_MODULE(Forwarder) {
    sc_in<int> IN;
    sc_in<bool> STROBE;
    sc_out<int> OUT;

    void process_forward() {
        while (true) {
            wait(); // wait for STROBE change
            if (STROBE.read()) {
                int value = IN.read();
                wait(2, SC_NS); // delay of 2 ns
                OUT.write(value);
            }
        }
    }

    SC_CTOR(Forwarder) {
        SC_THREAD(process_forward);
        sensitive << STROBE;
    }
};

SC_MODULE(Testbench) {
    sc_signal<int> IN;
    sc_signal<bool> STROBE;
    sc_signal<int> OUT;

    Forwarder* forwarder;

    void apply_stimuli() {
        IN.write(0);
        STROBE.write(0);
        wait(5, SC_NS);

        IN.write(5);
        STROBE.write(1);
        wait(1, SC_NS);

        STROBE.write(0);
        wait(2, SC_NS);

        IN.write(8);
        STROBE.write(1);
        wait(1, SC_NS);

        STROBE.write(0);
        wait(6, SC_NS);

        IN.write(15);
        STROBE.write(1);
        wait(1, SC_NS);

        STROBE.write(0);
        wait(10, SC_NS);
        sc_stop();
    }

    void monitor_output() {
        while (true) {
            wait(OUT.value_changed_event());
            cout << "@" << sc_time_stamp() << " OUT = " << OUT.read() << endl;
        }
    }

    SC_CTOR(Testbench) {
        forwarder = new Forwarder("Forwarder");
        forwarder->IN(IN);
        forwarder->STROBE(STROBE);
        forwarder->OUT(OUT);

        SC_THREAD(apply_stimuli);
        SC_THREAD(monitor_output);
    }

    ~Testbench() {
        delete forwarder;
    }
};

int sc_main(int argc, char* argv[]) {
    Testbench tb("tb");
    sc_start();
    return 0;
}
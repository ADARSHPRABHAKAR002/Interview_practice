#include<stdio.h>
char* convertString(char* input);
int main()
{
    char input[] = "24:00";
    printf("%s\n",input);

    convertString(input);
    return 0;
}
char* convertString(char* input)
{
    int hr = 0;
    int min = 0;
    char output[8];
    printf("Converted Time ");
    hr = (input[0] - '0')*10 + (input[1] - '0');

    min = (input[3] - '0')*10 + (input[4] - '0');

    if(hr<12){
        printf("%02d:%02d AM",hr,min);

    }
    if(hr<13 && hr>=12){
        printf("%02d:%02d PM",hr,min);
    }
    if(hr>=13 && hr<24){
        printf("%02d:%02d PM",hr-12,min);
    }
    if(hr>=24){
        printf("%02d:%02d AM",hr-24,min);
    }

}
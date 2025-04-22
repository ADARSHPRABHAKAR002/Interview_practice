#include<stdio.h>
char* convertString(int num,char *str);
int main(){
    int number;
    scanf("%d",&number);
    // printf("%d",number);
    char* input;
    char output[12];
    input = convertString(number,output);
    printf("%s in strinf format",input);
    return 0;

}
char* convertString(int num,char* str)
{
    int temp = num;
    int rev = 0;
    while(temp!=0){
        int a = temp%10;
        rev = rev*10 + a;
        temp/=10;
    }
    // printf("%d",rev);
    int i=0;
    int rev_t = 0;
    while(rev!=0){
        int a = rev%10;
        str[i++] = a + '0';
        rev/=10;
    }
    str[i] = '\0';
    // printf("%s",str);
    return str;
}
#include<stdio.h>
#include<string.h>

int main(){
    char n[100];
    fgets(n,100,stdin);
    puts(n);//there will be a new line after your name and that is because of fgets and it is automatically added
    printf("Length of your name is : %d", strlen(n));
    return 0;
}
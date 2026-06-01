/*Write a program to find if a cherecter entered by the user is uppercase */
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a charecter:");
    scanf("%c", &ch);
    
    if (ch>='A' && ch<='Z'){
        printf("The charecter is Upper case");
    }
    //A=65, Z=90, a=97, z=122
    /*ch>=65 is as same as ch>='A'
    every char have an int number*/
    else if (ch>='a' && ch<='z'){
        printf("The charecter is lower case");
    }
    else{
        printf("This is not an alphabet");
    }
    return 0;
}

/*Write a function that print as-salamu alaikum if user is muslim & bonjour if the user is french.*/
#include<stdio.h>

void salam();
void bonjour();

int main(){
    printf("If you are muslim, press M. If you are french, press F: ");
    char ch;
    scanf("%c", &ch);
    if(ch == 'M' || ch =='m'){
        salam();
    }
    else if(ch == 'F'|| ch == 'f'){
        bonjour();
    }
    else {
    printf("Invalid choice!\n");
    }
    
    return 0;
}

void salam(){
    printf("As-salamu alaikum\n");
}
void bonjour(){
    printf("Bonjour\n");
}
#include<stdio.h>
#include<string.h>

void checkcrt(char str[], char ch);

int main()
{
    char str[100];
    char ch;
    scanf("%s",str);
    scanf(" %c",&ch);
    checkcrt(str,ch);
    return 0;
}

void checkcrt(char str[], char ch){
    int flag=0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]==ch){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("Present\n");
    }else{
        printf("Not Present\n");
    }
}
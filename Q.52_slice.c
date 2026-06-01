#include<stdio.h>
#include<string.h>

void slice(char str[], int start, int end);
int main(){
    char str[100];
    int start, end;
    scanf("%s",str);
    scanf("%d %d",&start,&end);
    slice(str,start,end);
    return 0;
}
void slice(char str[], int start, int end){
    char new_str[100];
    int j=0;
    for(int i=start; i<end; i++){
        new_str[j]=str[i];
        j++;
    }
    new_str[j]='\0';
    puts(new_str);
}
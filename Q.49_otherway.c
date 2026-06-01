#include<stdio.h>
#include<string.h>
void printString(char arr[]);
int countLength(char arr[]); 

int main(){
    char name[100];
    fgets(name, 100, stdin);
    printf("lenghth is %d\n", countLength(name));
    printString(name);
    return 0;
}
int countLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1; // -1 to not count the null character
}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
}
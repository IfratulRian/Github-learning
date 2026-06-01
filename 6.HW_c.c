//Write a program in C to print all the letters in english
//alphabet using a pointer.
#include<stdio.h>
int main(){
char ch;
char *p;

p = &ch;

for(*p = 'A'; *p<='Z'; (*p)++){
    printf("%c\n",*p);
}
for(*p = 'a'; *p<='z'; (*p)++){
    printf("%c\n",*p);
}
return 0;
}


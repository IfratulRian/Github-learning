//percentage in three sub
#include<stdio.h>

float Percentage(int s, int m, int b);

int main(){
int s,m,b;
printf("Enter mark of Science :");
scanf("%d",&s);
printf("Enter mark of Math :");
scanf("%d",&m);
printf("Enter mark of Bangla :");
scanf("%d",&b);
float result = Percentage(s,m,b);
printf("Percentage of this three sub is %.2f%\n",result);
return 0;
}

float Percentage(int s, int m, int b){
return (s+m+b)/3;
}

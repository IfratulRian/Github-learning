#include<stdio.h>
#include<string.h>

struct student{
int id;
char name[100];
float cgpa;
};

int main(){
struct student s1;
s1.id=1660;
s1.cgpa=3.46;
strcpy(s1.name,"Arafat");
printf("Student id : %d\n",s1.id);
printf("Student name : %s\n",s1.name);
printf("Student cgpa : %.2f\n",s1.cgpa);
printf("\n");

struct student s2;
s2.id=1667;
s2.cgpa=3.73;
strcpy(s2.name,"Jaker");
printf("Student id : %d\n",s2.id);
printf("Student name : %s\n",s2.name);
printf("Student cgpa : %.2f\n",s2.cgpa);
printf("\n");

struct student s3;
s3.id=1673;
s3.cgpa=3.94;
strcpy(s3.name,"Abir");
printf("Student id : %d\n",s3.id);
printf("Student name : %s\n",s3.name);
printf("Student cgpa : %.2f",s3.cgpa);

return 0;
}

#include <stdio.h>
struct Student{int roll; char name[50];};
int main(){ struct Student s={1,"Tejas"}; printf("%d %s\n",s.roll,s.name);}
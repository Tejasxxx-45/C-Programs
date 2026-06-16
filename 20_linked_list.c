#include <stdio.h>
#include <stdlib.h>
struct Node{int d; struct Node*next;};
int main(){ struct Node*a=malloc(sizeof(struct Node)); struct Node*b=malloc(sizeof(struct Node)); a->d=10;a->next=b;b->d=20;b->next=NULL; for(struct Node*p=a;p;p=p->next) printf("%d ",p->d); }
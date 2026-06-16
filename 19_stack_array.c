#include <stdio.h>
int main(){ int stack[5],top=-1; stack[++top]=10; stack[++top]=20; printf("%d\n",stack[top--]); }
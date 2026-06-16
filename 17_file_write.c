#include <stdio.h>
int main(){ FILE *f=fopen("demo.txt","w"); fprintf(f,"Hello File"); fclose(f); }
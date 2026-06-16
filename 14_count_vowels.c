#include <stdio.h>
int main(){ char s[500]; fgets(s,500,stdin); int c=0; for(int i=0;s[i];i++){ char x=s[i]|32; if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') c++; } printf("%d\n",c);}
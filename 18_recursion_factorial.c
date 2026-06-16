#include <stdio.h>
long long f(int n){ return n<=1?1:n*f(n-1);}
int main(){ int n; scanf("%d",&n); printf("%lld\n",f(n)); }
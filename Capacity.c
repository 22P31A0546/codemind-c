#include<stdio.h>
int main()
{
    int t,s,b,c,ckb;
    scanf("%d%d%d",&t,&s,&b);
    c=2*t*s*b*512;
    ckb=c/1024;
    printf("%d KB",ckb);
}
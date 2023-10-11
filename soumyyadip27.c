#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d%d",&cp,&sp);
    if (cp>sp)
    {
        printf("Loss");
        int l=cp-sp;
        printf("\n%d",l);
    }
    else
    {
        printf("PROFIT");
        int l=sp-cp;
        printf("\n%d",l);
    }
}
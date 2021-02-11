#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    while (n!=1)
    {
    if (n%2!=0)
    {
        n = 3*n + 1;
        c++;
    }
    else
    {
        n = n/2;
        c++;
    }
    }
    printf("%d ",abs(c));
    return 0;
}

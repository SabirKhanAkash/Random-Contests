#include<stdio.h>
int main()
{
    int t,j,i,rev=0,temp;
    int num;
    scanf("%d",&t);
    for(i=0;i<t;i++) {
        scanf("%d",&num);
        temp=num;
        //printf("%d\n",temp);
        //printf("%d\n\n",rev);

        while(num){
            rev=rev*10 + num%10;
            num /= 10;
        }
        //printf("%d\n",rev);
        if(rev==temp)
            printf("Case %d: Yes\n",i+1);
        else if(rev!=temp)
            printf("Case %d: No\n",i+1);
        rev = 0;
    }

    return 0;
}

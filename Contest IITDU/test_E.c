#include<stdio.h>
int main(){
  int T,N,i=1,sum=0,x;
    scanf("%d",&T);
    for (x=1 ; x<=T ; x++)
    {

  scanf("%d",&N);

  while(i<N){
      if(N%i==0)
           sum=sum+i;
          i++;
  }
  if(sum==N && sum!=6)
      printf("YES\n");
  else
      printf("NO\n");
    }
  return 0;
}

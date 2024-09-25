#include <stdio.h>
int main()
  int n ,sc=0;
   scanf("%d",&n);
   int num[n],i,spa;
   for(i=1;i<=n;i++){
    scanf("%d",&num[i]);
   }
   scanf("%d",&spa);

   for(i=1;i<=n;i++){
        if(num[i]==spa){
        printf("%d ",i);
        sc++;
        }
   }
    if(sc==0){
    printf("%d",sc);
   }
  }

#include<stdio.h>
main()
{
int prev;
int curr;
int len=0;
scanf("%d",&prev);
if(prev != -1){
  len = 1;
  scanf("%d",&curr);
  while(curr != -1){
    if(prev < curr){
     len = len + 1;
   }else{
     len = 1;
   }
   prev=curr;
   scanf("%d",&curr);
   }
  }
}

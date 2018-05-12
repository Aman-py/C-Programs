#include<stdio.h>
main()
{
     int prev; int curr; int len; int maxlen;
     scanf("%d",&prev);
     maxlen = 1; len = 1;
     if(!(prev == -1)){
       do{
         scanf("%d",&curr);
         if(prev < curr){
          len = len +1;
          }else{
            if (maxlen < len) {
               maxlen = len;
            }
            len = 1;
           }
           prev = curr;
          }while( !(curr == -1));
         }
         if (maxlen < len){
           maxlen = len;
         }
 }

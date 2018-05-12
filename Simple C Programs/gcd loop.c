#include<stdio.h>
main(){
int a; int b; int t;

scanf("%d%d",&a,&b);

if(a<b){
     t = a; a=b; b = t;
}
printf("gcd of %d,%d is \n",a,b);

while(!(b== 0)){
      t = a;
      a = b;
      b = t%b;
}
printf("%d\n",a);
}

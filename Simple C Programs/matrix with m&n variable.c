#include<stdio.h>
main()
{
    int m,n;
    int rowindex=0;
    int sqsum=0;
    int a, colindex, rowsum;
    scanf("%d,%d",&m,&n);
    while(rowindex < m){
      rowsum = 0;    colindex=0;
      while(colindex < n){
        scanf("%d",&a);
        rowsum = rowsum + a;
        colindex = colindex + 1;
      }
      sqsum = sqsum + (rowsum * rowsum);
      rowindex = rowindex + 1;
     }
}


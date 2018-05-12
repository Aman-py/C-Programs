#include<stdio.h>
main()
{
    int rowindex=0;
    int colsum=0;
    int a;
    int colindex;
    int rowsum;
    int rowsumsq;
    while(rowindex < m){
      rowsum = 0;    colindex=0;
      while(colindex < n){
        scanf("%d",&a);
        rowsum = rowsum + a;
        colindex = colindex + 1;
      }

      rowsumsq = rowsum * rowsum;
      colsum = colsum + rowsumsq;
      rowindex = rowindex + 1;
    }
}


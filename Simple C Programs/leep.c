#include<stdio.h>
main()
int year;
year=400;
(if(((year%4)==0)
    &&((!((year%100)==0))
            ||((year%400)==0))))
  {printf("year %d is a leep year",year);
}

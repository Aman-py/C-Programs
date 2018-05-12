#include<stdio.h>
main()
{
    int p,n;
    float r,si;
    printf("enter values of p,n,r");
    scanf("%d%d%f",&p,&n,&r);

    si=p*n*r/100;
    printf("%f",si);
}

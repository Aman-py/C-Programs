#include<stdio.h>
main()
{
    float centigrades;
    float fahrenheit;

    centigrades=(((((2376*231)/5)+73)/45632)*543);
    fahrenheit =((9*centigrades)/5)+32;

    printf("the temp. %f celsius",centigrades );
    printf( " equals%f fahrenheit",fahrenheit);
    return 0;
}

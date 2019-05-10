#include <stdio.h>
#include <stdlib.h>

float fun()
{
    float x1=0.0,x2;
    do
    {
        x2=x1;
        x1=cos(x2);
    }while(fabs(x2-x1)>=0.000001);
    return x1;
}

int main()
{
    printf("%f\n",fun());
    return 0;
}

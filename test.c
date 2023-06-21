#include<stdio.h>
int main()
{
   
    float A = -500000000;
    float B =  500000000;
    float C = 1;
    printf(&quot;A + (B + C) is equal to %f \n&quot;, A + (B + C));
    printf(&quot;(A + B) + C is equal to %f&quot;, (A + B) + C);
    return 0;
}

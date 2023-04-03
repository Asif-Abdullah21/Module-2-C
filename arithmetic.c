#include<stdio.h>
int main()
{

    int a=3,b=20,c=9,d=88,e=99,f=0,g=222;

    double divide = b*1.0/a;
    printf("%lf\n",divide);

    int mod = b%a;
    int mod1 = a%b;
    printf("%d\n",mod);
    printf("%d\n",mod1);  
    return 0;
}
#include<stdio.h>
int a=10;

void fun()
{
    auto int b=20;
    register int d=20;
    static int f=20;

    b++;
    d++;
    f++;

    printf("Value of Auto variable=%d\n",b);

    printf("Value of register variable=%d\n",d);

    printf("Value of static variable=%d\n",f);
}
int main()
{
    int c=30;
    printf("First function call \n");
    fun();

    printf("second function call \n");
    fun();

    printf("Third function call \n");
    fun();

}
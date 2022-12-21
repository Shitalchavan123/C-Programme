#include<stdio.h>
int main()
{
    int no1=0;
    int no2=0;

    printf("Enter first number");
    scanf("%d",&no1);

    printf("Enter second number");
    scanf("%d",&no2);

    if(no1>no2)
    {
        
        printf("Maximum Number =%d",no1);
    }
    else
    {
        printf("Maximum Number=%d",no2);
    }
    return 0;

}
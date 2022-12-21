#include<stdio.h>

int main()
{
    int ret=0;
    ret=add(11,10);
    printf("Addition=%d\n",ret);
    return 0;

}
int add(int no1,int no2)
{
    int ans=0;
    ans=no1+no2;
    return ans;
    
}
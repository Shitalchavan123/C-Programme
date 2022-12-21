#include<stdio.h>
int main()
{
   
    int arr[3]={10,20,30};
    printf("Base address of array%p\n",arr);
    printf("Base address of array%p\n",&arr);

    printf("Size of Array%d\n",sizeof(arr));
     return 0;
}
#include<stdio.h>

int main()
{
    int n,count=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;++i)
    {
        count++;
    }
    printf("The number of elements in the array: %d",count);
    return 0;
}
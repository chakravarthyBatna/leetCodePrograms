/*
find the duplicate elements
*/
#include<stdio.h>
void main()
{
    int k=0,a[50],n;
    printf("enter the no of elements you want to enter:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[i]==a[j+1+k])
            {
                printf("\n%d",a[i]);
            }
        }
        k++;
    }
}
#include<stdio.h>
int main()
{
    int a[50],flag,n,temp;
    printf("enter the no of elements you want to enter:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    printf("\nprinting the original array\n");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]*a[i];
    }
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    printf("\nsquare's of sorted array is below\n");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
}
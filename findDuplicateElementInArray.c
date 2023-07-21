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
    printf("\nprinting the user entered array element's\n");
    for(int i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    printf("\nprinting the duplicate elements\n");
    for(int i=0;i<n;i++)       //at first j<4(iterates 4 times from j=0 to j=1);
    {           //for i=1 it should only iterate 3 times(j<3) and i=2,j<2 and i=3,j<1;
        for(int j=0;j<n-i-1;j++)  //we taken k because everytime 2nd for loop enters j=0 
                                       //so if i=3 then a[3]+a[1] this will happen if we don't taken k
        {                                // if i=3 then a[3]+a[4] and loop should stop;
            if(a[i]==a[j+1+k])
            {
                printf("\n%d",a[i]);
                break;
            }
        }
        k++;
    }
}
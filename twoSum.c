/*take an array of n numbers from user as input and take the target key from user
such that if a[index]+a[index+1]=target then return 
*/
#include<stdio.h>
void main()
{
    int a[50],target,k=0,n;
    printf("\nenter the no of elements you want to print:");
    scanf("%d",&n);       //asking the no of array element's from user;
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);  //scaning array elements from user;
    }
    printf("\nenter the target key:");
    scanf("%d",&target);    //asking target key such that sum of indices = target;
    printf("\nprinting the original array values\n");
    for(int i=0;i<n;i++)
    {                       //printing the user entered array element's;
        printf("\t%d",a[i]);
    }
    for(int i=0;i<n;i++)      //if n=5 then we should iterate 4times this loop;
    {
       
        for(int j=0;j<n-i-1;j++)  //at first j<4(iterates 4 times from j=0 to j=1);
        {       //for i=1 it should only iterate 3 times(j<3) and i=2,j<2 and i=3,j<1;
            if(a[i]+a[j+k+1]==target)    //we taken k because everytime 2nd for loop enters j=0 
            {                           //so if i=3 then a[3]+a[1] this will happen if we don't taken k
                printf("\nsum of a[%d] (%d) + a[%d] (%d) = %d",i,a[i],j+k+1,a[j+1+k],target);
                break;            // if i=3 then a[3]+a[4] and loop should stop;
            }
        }
        k++;
    }
    
}
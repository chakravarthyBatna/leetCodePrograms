/*You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and
 choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.*/
#include<stdio.h>
void main()
{
    int a[50],n,d=0,k,l,h;
    printf("\nenter the no of day's the trade happen's:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter %dth day price:",i+1);
        scanf("%d",&a[i]);
    }
    h=a[n-1]-a[n-2]; //assume that h is the height profit
    l=a[n-1]-a[n-2];//assume that l= lowest profit;
    for(int i=n-1;i>=0;i--)        //if n=5; then i should start from 4(n-1) and j should start from 3(n-2-d)
    {                             //d is taken because for(i=2) then j should start from 1
        for(int j=n-2-d;j>=0;j--) // so if d not taken,every time j starts from 3(n-2) only
        {                          //
            k=a[i]-a[j];
            if(k>h)
            {
                h=k;
            } if(k<l)
            {
                l=k;
            }
        }
        d++;     //d is taken because for(i=)
    }
    printf("\nmaximum profit: %d",h);
    printf("\nlowest profit is %d",l);
}
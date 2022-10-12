#include<stdio.h>
void main()
{   //Arjun Pandey(2100320130043)
    int max=0,i,n,a[20];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("largest number is %d",max);
}

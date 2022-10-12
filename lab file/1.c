#include<stdio.h>
void main()
{   //Arjun Pandey(2100320130043)
    int a[30],i,n,sum=0,avg;
    printf("enter the number of students");
    scanf("%d",&n);
    printf("enter the marks of student");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       sum=sum+a[i];
    }
    avg=sum/n;
    printf("average marks is %d",avg);
}

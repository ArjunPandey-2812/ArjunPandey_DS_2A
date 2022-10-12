#include<stdio.h>
void main()
{
    int n,l,u;
    scanf("%d%d%d",&n,&l,&u);
    int a[n];
    for(int i=0; i<n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum1 = 0;
    for(int i=0; i<n-1; i++)
    {
        sum1 = sum1 + a[i];
    }
    int sum2=0;
    for(int i=l; i<=u; i++)
    {
        sum2 = sum2 + i;
    }
    sum2=sum2-sum1;
    printf("%d",sum2);

   return 0;
}

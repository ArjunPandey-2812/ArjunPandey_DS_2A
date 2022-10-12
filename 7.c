#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    int k=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse:\n");
    for(int i=n-1;i>=0;i--)
    {
        b[k] = a[i];
        k++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}

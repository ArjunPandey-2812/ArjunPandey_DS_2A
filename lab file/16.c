#include <stdio.h>
void main()
{
    //  ARJUN PANDEY(2100320130043)
    int n, key, flag = 0;
    printf("Enter size of Array:\n");
    scanf("%d", &n);
    printf("Enter elements of Array:\n");
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Key:\n");
    scanf("%d", &key);
    int i;
    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element found at %d", i + 1);
    }
    else
        printf("Element not found");
}

#include <stdio.h>
void main()
{   //Arjun Pandey(2100320130043)
    int n, temp, key, mid, l, r;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter Sorted Array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Key:\n");
    scanf("%d", &key);
    l = 0;
    r = n - 1;
    mid = (l + r) / 2;
    while (l <= r)
    {
        if (a[mid] == key)
        {
            printf("Element found at position:\n");
            printf("%d", mid + 1);
            break;
        }
        else if (key < a[mid])
        {
            r = mid - 1;
        }
        else if (key > a[mid])
        {
            l = mid + 1;
        }
        mid = (l + r) / 2;
    }
    if (l > r)
    {
        printf("Element Not found");
    }
}

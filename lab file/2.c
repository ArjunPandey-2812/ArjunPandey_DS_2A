#include <stdio.h>
//Arjun Pandey(2100320130043)
int main()
{
    int i,j,k,m,n,p,q,af=0,pf=0;
    int a[10][10],b[10][10],sum[10][10],prod[10][10];
    scanf("%d%d%d%d",&m,&n,&p,&q);
    for(i=0;i<m;i++)
     {for(j=0;j<n;j++)
       scanf("%d",&a[i][j]);
     }
    for(i=0;i<p;i++)
     {for(j=0;j<q;j++)
       scanf("%d",&b[i][j]);
     }
    if((m==p)&(n==q))
     {for(i=0;i<m;i++)
      {for(j=0;j<n;j++)
         sum[i][j]=a[i][j]+b[i][j];
      }
       af++;
     }
     if(n==p)
      {for(i=0;i<m;i++)
        {for(j=0;j<q;j++)
          {prod[i][j]=0;
            for(k=0;k<n;k++)
             {prod[i][j]+=a[i][k]*b[k][j];
             }
          }
        }
        pf++;
     }
    if(af==1)
    {
     printf("Addition of two matrices: \n");
     for(i=0;i<m;i++)
        {
         for(j=0;j<n;j++)
         {
           printf("%d ", sum[i][j]);
         }
         printf("\n");
        }
    }
    if(pf==1)
    {
        printf("multiplication of two matrices: \n");
        for(i=0;i<m;i++)
         {
          for(j=0;j<q;j++)
           {
            printf("%d ", prod[i][j]);
           }
          printf("\n");
         }
    }

    return 0;
}

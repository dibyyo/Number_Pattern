#include<stdio.h>
void main()
{
            int n,i,j;
            printf("Enter the no elements ");
            scanf("%d",&n);
            int a[100][100];
            for(i=0;i<n;i++)
            {
                a[i][0]= 1;
                a[0][i] = 1;
                a[i][n - 1] = 1;
                a[n - 1][i] = 1;
            }
            int c = 2,d=2,e=2,f=2;
            for(i=1;i< n-1;i++)
            {
                for(j=1;j< n-1;j++)
                {
                    if(i==j)
                    {
                        if(c<((n+1)/2))
                        {
                            a[i][j] = c++;
                            d = c;
                        }
                        else
                        {
                            a[i][j] = d--;
                        }
                    }
                    if((i+j)==(n-1))
                    {
                        if (e < ((n+1) / 2))
                        {
                            a[i][j] = e++;
                            f = e;
                        }
                        else
                        {
                            a[i][j] = f--;
                        }
                    }
                }
            }
            for(i=0;i< n;i++)
            {
                for (j = 0; j < n; j++)
                {
                    if(a[i][j]!=0)
                        printf("%d",a[i][j]);
                    else
                    printf(" ");
                }
                printf("\n");
            }
        }

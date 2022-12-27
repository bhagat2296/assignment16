#include <stdio.h>
#include <stdlib.h>
/*void arrAdd(int[3][3],int[3][3]);
int main()                                  //Question 1
{
    int a[3][3],b[3][3],c[3][3];
    printf("enter elements in first array\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }


    printf("enter elements in second array\n");
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        scanf("%d",&b[i][j]);
    }
    arrAdd(a,b);

    return 0;
}

void arrAdd(int a[3][3],int b[3][3])
{
    int c[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
    {
        c[i][j]= a[i][j]+ b[i][j];
    }

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
}*/



/*int main()                              //Question 2
{
    int m,n,p,q;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];

    printf("enter elements in first matrix\n");
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nfirst matrix is:\n");

        for(int i=1;i<=m;i++)
        {
           for(int j=1;j<=n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }
      printf("enter number of rows and column for second matrix\n");
      scanf("%d%d",&p,&q);
      int second[p][q];

       if(m!=p)
        {printf("multiplication operation not possible\n");}
       else

        printf("enter elements in second matrix\n");
        for(int i=1;i<=p;i++)
       for(int j=1;j<=q;j++)
        {
        scanf("%d",&second[i][j]);
        }

        printf("\n\nsecond matrix is:\n");

        for(int i=1;i<=p;i++)
        {
           for(int j=1;j<=q;j++)
            {
              printf("%d\t",second[i][j]);
            }
            printf("\n");
        }



     int third[m][n],tot;

        for(int i=1;i<=m;i++)
            {
           for(int j=1;j<=n;j++)
             {
              for(int k=1;k<=p;k++)
               {
                tot = tot + first[i][k] * second[k][j];
               }
                 third[i][j]=tot;
                 tot=0;
             }
            }

            printf("\n\nmultiplication of both matrix is:\n");
            for(int i=1;i<=m;i++)
                {
                for(int j=1;j<=n;j++)
                 {
                   printf("%d\t",third[i][j]);
                 }
                  printf("\n");
                }
}*/




/*int main()                              //Question 3
{
    int m,n,p,q;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];

    printf("enter elements in first matrix\n");
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=1;i<=m;i++)
        {
           for(int j=1;j<=n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }

        printf("transpose of matrix\n");

        for(int i=1;i<=m;i++)
            {
            for(int j=1;j<=n;j++)
            {
                printf("%d\t",first[j][i]);
            }
            printf("\n");
            }

}*/


/*int main()                              //Question 4
{
    int m,n,p,q;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }

        printf("right diagonal of matrix\n");

        for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                if(i+j==size-1)
                printf("%d\t",first[i][j]);
                else
                    printf("_\t");
            }
            printf("\n");
            }

}*/




/*int main()                              //Question 5
{
    int m,n,p,q;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }

        printf("left diagonal of matrix\n");

        for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                printf("%d\t",first[i][j]);
                else
                    printf("_\t");
            }
            printf("\n");
            }

}*/


/*int main()                              //Question 6
{
    int m,n,tot;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }

        printf("sum of rows of matrix\n\n");

        for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                tot = tot + first[i][j];
            }
             printf("sum of %dth row is %d\n",i,tot);
             tot=0;
            }


            printf("\n\nsum of column of matrix\n\n");

        for(int j=0;j<m;j++)
            {
            for(int i=0;i<n;i++)
            {
                tot = tot + first[i][j];
            }
             printf("sum of %dth column is %d\n",j,tot);
             tot=0;
            }

}*/



/*int main()                              //Question 7
{
    int m,n,p,q;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }

        printf("lower triangular of matrix\n");

        for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                if(i>j)
                printf("%d\t",first[i][j]);
                else
                    printf("\t");
            }
            printf("\n");
            }

}*/



/*int main()                              //Question 8
{
    int m,n,p,q;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }

        printf("Upper triangular of matrix\n");

        for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                if(i<j)
                printf("%d\t",first[i][j]);
                else
                    printf("\t");
            }
            printf("\n");
            }

}*/



/*int main()                              //Question 9
{
    int m,n,cnt=0;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }


            for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                if(first[i][j]==0)
                    cnt++;
            }
            printf("\n");
            }
            if(cnt>(m*n)/2)
                printf("it is sparse matrix:\n");
            else

                printf("it is not sparse matrix:\n");

}*/




/*int main()                              //Question 10
{
    int m,n,cnt=0;
    printf("enter number of rows and column for first matrix\n");
    scanf("%d%d",&m,&n);
    int first[m][n];
    int size=m;


    printf("enter elements in matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        scanf("%d",&first[i][j]);

     printf("\n\nmatrix is:\n");

        for(int i=0;i<m;i++)
        {
           for(int j=0;j<n;j++)
            {
              printf("%d\t",first[i][j]);
            }
            printf("\n");
        }


            for(int i=0;i<m;i++)
            {
            for(int j=0;j<n;j++)
            {
                if(first[i][j]==1)
                    cnt++;
            }
            printf("\n");
            }

                printf("No. of 1's in matrix is: %d",cnt);


}*/

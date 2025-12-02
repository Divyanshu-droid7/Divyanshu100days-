//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main (){
    int x[50][50]={0};
    int sum[50];
    int col, row, i,j ;
    printf ("Enter the amount of rows and column: ");
    scanf("%d %d",&row,&col);

    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("  %d",x[i][j]);
        printf("\n");
    }
printf("\n\n");
    //addition
    int sum_;
    for (i=0;i<row;i++)
    {
        sum_=0;
        for(j=0;j<col;j++)
        sum_=sum_+x[i][j];
        sum[i]=sum_;
    }
    for(i=0;i<row;i++)
    {
        printf("  %d",sum[i]);
    }
}
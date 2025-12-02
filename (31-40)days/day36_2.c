//Find the sum of all elements in a matrix.
#include <stdio.h>
int main(){
int x[25][25]={0};
int i,j,col,row;
    printf("enter the amount of rows and columns: ");
    scanf("%d %d",&row ,&col);
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%d ",x[i][j]);
        printf("\n");
    }
//addition
    int sum=0;
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        sum=sum+x[i][j];
    }
    printf("sum is : %d",sum);
}
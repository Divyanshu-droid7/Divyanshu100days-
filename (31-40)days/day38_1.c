// Add two matrices.
#include <stdio.h>
int main(){
int x[50][50]={0};
int y[50][50]={0};
int z[50][50]={0};
int i,j,col,row;

    printf("enter the amount of rows and column: ");
    scanf("%d %d ",&row,&col);
   //enter no  in the array
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%4d ",x[i][j]);
        printf("\n");
    }
    printf("\n\n");
        //enter no  in the array
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&y[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%4d ",y[i][j]);
        printf("\n");
    }
    printf("\n\n");

     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
        z[i][j]=x[i][j]+y[i][j];
        printf("%4d ",z[i][j]);
        }
        printf("\n");
        
    }
}
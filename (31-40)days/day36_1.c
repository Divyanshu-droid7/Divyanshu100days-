//Read and print a matrix.
#include <stdio.h>
int main(){

    int x[50]={0};
    int col,row,i,j;
    printf("enter the no. of rows and column for the martix: ");
    scanf("%d %d",&row ,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&x[i*col+j]);
        }
        printf("\n");
    }
   for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d  ",x[i*col+j]);
        }
        printf("\n");
    }
   return 0;
}
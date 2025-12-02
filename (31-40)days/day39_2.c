// Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>
int main(){
    int x[50][50];
    int i,j,row,col;
    start:
    printf("enter the amournt of rows and column : ");
    scanf("%d %d",&row,&col);
    if(row!=col)
    {
        printf("this is not a square matrix please enter a square matrix.\n");
        goto start;
    }
    else
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                scanf("%d",&x[i][j]);
            }
        }
       printf("\n\n");
    }
    int sum=0;
    for(i=0;i<row;i++)
    {
        sum=sum+x[i][i];
    }
    printf("the sum of the diagonals arae : %d",sum);
    }
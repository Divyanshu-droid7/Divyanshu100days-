//Check if the elements on the diagonal of a matrix are distinct.

//check if the martix is a square matrix or not 
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
    for(i=0;i<row;i++)
    {
        for(j=i+1;j<row;j++)
        {
            if(x[i][i]==x[j][j])
            {
                printf("the diagonals arent distinct!!");
                return 0;
            }
        }
    }
    printf("the digonals are distinct");
}
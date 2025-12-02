// Rotate an array to the right by k positions.
#include <stdio.h>
int main(){
    int x[100]={0};
    int n,i,j,temp;
    printf("enter the amount of number you want to enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter a no. for %d index: ",i);
        scanf("%d",&x[i]);
    }
    //bubble sorting 
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(x[j]>x[j+1])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
        }
    }
                for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
    printf("\n");
    //inputing the indext number
    int ind_val;
    printf("enter index: ");
    scanf("%d",&ind_val);
    //arranging the array
    for(i=0;i<=ind_val;i++)
    {
        for(j=0;j<=n-2;j++)
        {
            temp=x[j];
            x[j]=x[j+1];
            x[j+1]=temp;
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%d ",x[i]);
    }
}
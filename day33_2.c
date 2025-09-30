//Insert an element in a sorted array at the appropriate position.
#include <stdio.h>
int main(){
    int x[100]={0};
    int n,i,temp;
    printf("enter the amount of number you want to entre: ");
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
   //inputing a new number
    int numb,ind_val=n;
    printf("enter a no to enter in the array: ");
    scanf("%d",&numb);
    for (i=0;i<=n;i++)
    {
        if(numb<x[i])
        {
            ind_val=i;
            break;
        }
    }
     for (i=n;i>=ind_val;i--)
    {
        temp=x[i];
        x[i]=numb;
        x[i+1]=temp;
    }

    for(i=0;i<=n;i++)
    {
        printf("%d ",x[i]);
    }
}
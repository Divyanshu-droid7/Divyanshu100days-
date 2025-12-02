// Delete an element from an array.
#include <stdio.h>
int main() {
    int x[50];
    int i,n;
    int even=0, odd=0;
    printf("enter the quantity of the numbers: ");
    scanf("%d",&n);
//inputing value in array
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
//inputing the index 
int ind_val;
printf("enter the index number: ");
scanf("%d",&ind_val);
//adding the number int the array
        for (i=ind_val;i>=n-2;i--)
    {
        x[i]=x[i+1];
        x[i+1]=0;
    }
    for(i=0;i<=n-2;i++)
    {
        printf("%d ",x[i]);
    }
}
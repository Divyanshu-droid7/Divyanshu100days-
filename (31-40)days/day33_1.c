// Search in a sorted array using binary search.
#include <stdio.h>
int main() {
    int x[50];
    int i,n,f;
    int even=0, odd=0;
    printf("enter the numbers : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("enter the number you want to find: ");
    scanf("%d",&f);
    for(i=0;i<n;i++)
    {
        if(x[i]==f)
        printf("%d is at %d index\n",f,i);
        }
}
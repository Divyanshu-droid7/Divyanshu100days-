// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() {
    int num,count,digit;
    int x[10]={0};
    printf("enter a number: ");
    scanf("%d",&num);
    while(num!=0)
    {
        
        digit=num%10;
        x[digit]++;
        num/=10;

    }
    int max=x[0];
    for (int i=0;i<10;i++)
    {
        if (max<x[i])
        {max=x[i];
        digit=i;}
    }
    printf("%d is the most frequent number with the frequency of %d",digit,max);

}
/* 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the length of the array: ");
    scanf("%d",&N);
    int a[N],i,r,j;
    printf("Enter %d numbers: ",N);
    for(i=0;i<=N-1;i++)
        scanf("%d",&a[i]);
    
        for(i=0;i<N/2;i++)
        {
            int temp;
            temp=a[N-i-1];
            a[N-i-1]=a[i];
            a[i]=temp;
        }
            
    for ( i = 0; i < N; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
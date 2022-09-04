/* 10. Write a program in C to copy the elements of one array into another array.Take array
values from the user.
*/

#include<stdio.h>
int main()
{
    int N;
    printf("Enter the length of array: ");
    scanf("%d",&N);

    int a[N],b[N],i;
    printf("\nEnter the %d elements: ",N);
    for ( i = 0; i <=N-1; i++)
        scanf("%d",&a[i]);
    
    for (i = 0; i <=N-1; i++)
        b[i]=a[i];

    for ( i = 0; i <=N-1; i++)
        printf("%d ",b[i]);
 
    return 0;
}
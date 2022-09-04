/*4. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user. [by Bubble sort]  [Generalized form]
*/
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

    for(r=1;r<=N-1;r++)
    {
        for(i=0;i<=N-1-r;i++)
        {
            if(a[i]>a[i+1])
            {
                int temp;
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }

    for(i=0;i<=N-1;i++)
        printf("%d ",a[i]);
    
    return 0;

}

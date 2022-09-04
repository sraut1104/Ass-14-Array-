/* 6. Write a program to sort elements of an array of size 10. Take array values from the
user. [Generalized form]
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

    for(r=0;r<=N-2;r++)
    {
        for(i=r;i<=N-1;i++)
        {
            for(j=i+1;j<=N-1;j++)
            {
                if(a[i]<a[j]);
                else
                    break;
            }
            if(j>N-1)
                break;
        }
        if(i!=r)
        {
            int temp;
            temp=a[i];
            a[i]=a[r];
            a[r]=temp;
        }
    }

    for(i=0;i<=N-1;i++)
        printf("%d ",a[i]);
}



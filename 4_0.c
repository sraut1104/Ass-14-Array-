/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user. */
#include<stdio.h>
int main()
{
    int a[4],i,j;

    printf("Enter 4 numbers: ");
    for(i=0;i<=3;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=3;i++)
    {
        for(j=i+1;j<=3;j++)
        {
            if(a[i]>a[j]);
            else
                break;
        }
        if(j>3)
            break;
    }
    printf("\nGreatest number = %d",a[i]);
}

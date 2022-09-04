/*4. Write a program to find the greatest number stored in an array of size 10. Take array
values from the user. */
#include<stdio.h>
int main()
{
    int a[4],i,max;

    printf("Enter 4 numbers: ");
    for(i=0;i<=3;i++)
        scanf("%d",&a[i]);

    max=a[0];
    for(i=1;i<=3;i++)
    {
        if(max>a[i]);
        else
            max=a[i];
    }
    if(i>3)
        printf("\nGreatest number = %d",max);

    return 0;
}


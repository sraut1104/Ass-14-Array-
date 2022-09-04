/*4. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user. [by Bubble sort]
*/
#include<stdio.h>
int main()
{
    int a[4],i,r;

    printf("Enter 4 numbers: ");
    for(i=0;i<=3;i++)
        scanf("%d",&a[i]);

    for(r=1;r<=3;r++)
    {
        for(i=0;i<=3-r;i++)
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

    for(i=0;i<=3;i++)
        printf("%d ",a[i]);
    
    return 0;

}

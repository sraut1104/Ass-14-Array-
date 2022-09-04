/*4. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user. */
main()
{
    int a[4],i,min;

    printf("Enter 4 numbers: ");
    for(i=0;i<=3;i++)
        scanf("%d",&a[i]);

    min=a[0];
    for(i=1;i<=3;i++)
    {
        if(min<a[i]);
        else
            min=a[i];
    }
    if(i>3)
        printf("\nSmallest number = %d",min);
}


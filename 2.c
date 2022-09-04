/* 2. Write a program to calculate the average of numbers stored in an array of size 10.
Take array values from the user. */

main()
{
    int a[10],i,sum=0;

    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);

    for(i=0;i<=9;i++)
            sum=sum+a[i];
    printf("\nAverage = %f",sum/10.0);
}


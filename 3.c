/* 3. Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user. */

main()
{
    int a[10],i,sum_even=0,sum_odd=0;
    printf("Enter 10 numbers: ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            sum_even=sum_even+a[i];
        else
            sum_odd=sum_odd+a[i];
    }
    printf("Even sum = %d\nOdd sum = %d",sum_even,sum_odd);
}

#include<stdio.h>//Created by Sumit Suman on 01-01-2021.
int main()
{
    int n,div=0;
    printf("Enter number: ");
    scanf("%d",&n);

    for(int c=1;c<=n;c++)
    {
        if(n%c==0)
        {
            div++;
        }
    }
    if(div==2)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0;
}
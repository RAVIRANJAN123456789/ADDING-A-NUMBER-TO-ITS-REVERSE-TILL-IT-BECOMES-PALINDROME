#include<stdio.h>
int reverse(int n)
{
    int rem=0;int rev=0;
    while(n>0)
    {
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
    }
    return rev;
}
int pallindrome(int n)
{
    if(n==reverse(n))
    {
        return 1;
    }
    else{
        return 0;
    }
}
int add_till_pallindrome(int n)
{

    while(pallindrome(n)!=1)
    {
        n=n+reverse(n);
    }
    return n;
}
int main()
{
    int n;
    printf("\nenter the number to be checked and added too its reverse till it becomes a palindrome number \n");
    scanf("%d",&n);
    printf("Output is: %d",add_till_pallindrome(n));
    return 0;
}

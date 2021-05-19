#include<stdio.h>

int main()
{
    int i=0,n;  
    printf("enter a no you want factorial of:");
    scanf("%d", &n);
    int f=1;  
    for(int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("factorial is= %d", f);
    return 0;
}
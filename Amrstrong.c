#include<stdio.h>
void main()
    {
        int n,copy,armstrong=0;
        printf("Enter a number : ");
        scanf("%d",&n);
        copy=n;
        while(n>0)
        {
            armstrong+=((n%10)*(n%10)*(n%10));
            n=n/10;
        }
        if(armstrong==copy)
        {
            printf("\nThe number is armstrong ");
        }
        else
        {
            printf("\nThe number is not armstrong ");
        }
    }

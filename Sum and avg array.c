#include<stdio.h>
void main()
  {
        int array[20],sum=0,n;
        float average;
        printf("Enter the number of elements in the array : ");
        scanf("%d",&n);
        printf("\nEnter the array elements : ");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
            sum+=array[i];
        }
        printf("\nThe array elements are : ");
        for(int i=0;i<n;i++)
        {
            printf(" %d\t",array[i]);
        }
        average=sum/n;
        printf("\nSum = %d\nAverage = %f",sum,average);
   }
        
      

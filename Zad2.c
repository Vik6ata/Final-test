#include<stdio.h>
unsigned sumArrayDigits( const int* arr,size_t n);
int main()
{ int n;
  printf("Enter the size of elements:");
  scanf("%d",n);
  int array[n];
  printf("Now enter the numbers:");
  for(int i=0;i<n;i++)
  {
   scanf("%d",array[i]);
  }
  
  sumArrayDigits(array,n);
}

unsigned sumArrayDigits( const int* arr,size_t n)
{  
    int sum=0;
    for(int i=0;i<n;i++)
    {  
    
        sum+=arr[i]/10;
        sum+=arr[i]%10;
     }
     printf("The sum of digits is:%d\n",sum);
}
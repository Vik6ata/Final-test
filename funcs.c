#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"func.h"
int CharRand(char min,char max)
 {
   return min+rand()%(max-min+1);
 }
void PrintAll(char* arr,int a,int b, int c)
{
 for(int i=0;i<a+b+c;i++)
 {
  printf("%c",arr[i]);
 }
 putchar('\n');
}
void Counter(char*arr,int a)
{
 int count;
 for(int i=0;i<a;i++)
 {
   if(arr[i])
   {
    count++;
   }
   else
   {
    fprintf(stderr,"There is a problem!");
    break;
   }
 }
 printf("The count of small chars is:%d\n",count);
}
void MostFchar(char*arr,int a,int b,int c)
{
 int count;
 char element;
 for(int i=0;i<a+b+c;i++)
 {
  char temp=arr[i];
  int count_t=0;
 
 for(int j=0;j<a+b+c;j++)
 {
  if(arr[j]=temp)
  {
   count_t++;
  }
  
 }
 if(count_t>count)
 {
  element=temp;
  count=count_t;
 }
 }
 printf("The most frequent element is:%c\n",element);
}
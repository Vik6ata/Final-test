#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"func.h"

int main()
{
 srand(time(NULL));
 int n,m,k;
 printf("Enter a number:");
 scanf("%d",&n);
 char* characters=malloc(n*sizeof(char));
 if(NULL==characters)
 {
  return EXIT_FAILURE;
 }
 for(int i=0;i<n;i++)
 {
   characters[i]=CharRand('a','z');
 }
 printf("Realloc your array:");
 scanf("%d",&m);
 characters=realloc(characters,n+m*sizeof(char));
 if(NULL==characters)
 {
  return EXIT_FAILURE;
 }
 for(int i=n;i<n+m;i++)
 {
  characters[i]=CharRand('A','Z');
 }
 printf("Realloc your array for the last time:");
 scanf("%d",&k);
 characters=realloc(characters,n+m+k*sizeof(char));
 if(NULL==characters)
 {
  return EXIT_FAILURE;
 }
 for(int i=n+m;i<n+m+k;i++)
 { 
   characters[i]=CharRand('!','-');
   characters[n+m+k]='\0';
 }
PrintAll(characters, n,m,k);
Counter(characters, n);
MostFchar(characters, n, m, k);
}
 

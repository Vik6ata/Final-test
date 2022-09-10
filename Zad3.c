#include<stdio.h>
#include<stdlib.h>
#include<inttypes.h>
#define COUNT 10
#define CHECKBIT(mask,bit) !!(mask&(1<<bit))
typedef struct node
{
 uint64_t data;
 struct node *next;
}note;
void Push(note**head);
void Print(note* head);
void maxValue(note* head);
void Bits(note*head);

int main()
{
  note *head=NULL;
  for(int i=0;i<COUNT;i++)
  {
   Push(&head);
  }

  Print(head);
  maxValue(head);
  Bits(head);
}
void Push(note **head)
{ 
  
  note *newNode= malloc(COUNT*sizeof(note));
  newNode->data=rand()%RAND_MAX;
  newNode->next=*head;
  *head=newNode;
  
}

void Print(note* head)
{
 note *current=head;
 while(current!=NULL)
 {
   printf("%ld\n",current->data);
   current=current->next;
 }
}
void maxValue(note* head)
{
    int max=0;
    note *newElem=head;
    while(newElem!=NULL)
    {
    if(max<newElem->data)
    {
       max=newElem->data;
    }
    newElem=newElem->next;
    }
   printf("The maximal value is :%d\n",max);
}
void Bits(note *head)
{ 
  int counter=0;
  while(head!=NULL)
  {
  for( int bit=63;bit>=0;bit--)
  { 
    if(CHECKBIT(head->data,bit)==1)
    { 
    counter++;
    }
  }
   head=head->next;
  }
  printf("The count of high bits is:%d\n",counter);
}


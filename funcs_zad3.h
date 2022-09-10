#include<inttypes.h>
#ifndef FUNK
#define FUNK
typedef struct node
{
 uint64_t data;
 struct node *next;
}note;
int Push(note**head);
int Print(note* head);
int maxValue(note* head);
int Bits(note*head);
#endif 

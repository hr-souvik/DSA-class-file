


#include <stdio.h>
#include <stdlib.h>

struct Node
{
 int data;
 struct Node *next;
}*first=NULL;

void create(int A[],int n)
{
 int i;
 struct Node *t,*last;
 first=(struct Node *)malloc(sizeof(struct Node));
 first->data=A[0];
 first->next=NULL;
 last=first;

 for(i=1;i<n;i++)
   {
     t=(struct Node*)malloc(sizeof(struct Node));
     t->data=A[i];
     t->next=NULL;
     last->next=t;
     last=t;
   }
}

void RDisplay(struct Node *p)
{
 if(p!=NULL)
 {
 RDisplay(p->next);
 printf("%d ",p->data);

 }
}
int main()
{
 
 int A[]={12,43,5,33,2,23,5,21,34,7};
 create(A,5);

 RDisplay(first);

 return 0;
}




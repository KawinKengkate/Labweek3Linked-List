#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(void) 
{
  int i;
  NODE *head = (NodePtr) malloc(sizeof(NODE));
  for(i = 0 ; i == 0 ;)
  {
    NODE *temp = (NodePtr) malloc(sizeof(NODE));
    scanf("%d", &temp->id);
    if(temp->id == 0)
    {
      temp = NULL;
      break;
    }
    else
      {
        scanf("%s", temp->name);
        temp->next = head;
        head = temp;
      }
  }

  NODE *temp = (NodePtr) malloc(sizeof(NODE));
  for(temp=head; temp!=NULL ;temp=temp->next)
  {
       if(temp->id == 0)
       {
         break;
       }
       printf("%d  ",temp->id);
       printf("%s\n",temp->name);
  }

  NODE *TEMP = (NodePtr) malloc(sizeof(NODE));
  for(temp=head; temp!=NULL ;temp=temp->next)
  {
    TEMP = temp->next;
    free(temp);
  }
  free(TEMP);

}
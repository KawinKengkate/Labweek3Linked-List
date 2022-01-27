struct node
{
  int id;
  char name[500];
  struct node *next;
};
typedef struct node NODE;
typedef NODE* NodePtr;
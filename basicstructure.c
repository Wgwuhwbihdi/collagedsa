#include <Stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node
{
  int data;
  struct node *add;
};
struct node *start = NULL, *new1, *temp;

int main()
{
  int choice;
  do
  {

    printf("---------------MENU LIST-------------------");
    printf("\n 1:create");
    printf("\n 2:Display");
    printf("\n 3:insertfirst");
    printf("\n 4:indertmiddle");
    printf("\n 5:insterlast");
    printf("\n 6:delete first ");
    printf("\n 7:delete middle");
    printf("\n 8:delete last");
    printf("\n exit 9");
    printf("--------------------------------");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      create();
      break;
    case 2:
      Display();
      break;

    default:
      break;
    }

  } while (choice != 9);

  create()
  {
    int n;
    printf("\n Enter the first element");
    scanf("%d", &n)
        start = (struct node *)malloc(sizeof(struct node));
    start->data = n;
    start->add = NULL;
    temp = start;
    printf("\n Do you want to continue");
    ch = getche();
    while (ch == 'y' || ch == = 'Y')
    {
      printf("\n Enter the next element");
      scanf("%d", &n);
      new1 = (struct node *)(malloc(sizeof(struct node)));
      new1->data = n;
      new1->add = NULL;
      temp->add = new1;
      temp = temp->add;
      printf("\n Do you want to continue");
      ch = getche();
    }
  }

  return(0);
}
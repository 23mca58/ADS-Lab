#include<stdio.h>
#include<stdio.h>
struct node{
 int data;
 struct node* next;
 };
 void insertAtFront(struct node** head, int new_data) {
  struct node* new_node =(struct node*)malloc(sizeof(struct node));
  new_node.data=new_data;
  new_node.next=(*head);
  (*head)=new_node;
  }
 void insertAfter(struct node* prev_node, int new_data) {
  if(prev_node == NULL) {
  printf("Invalid");
  return;
  }
  struct node* new_node=(struct node*)malloc(sizeof(struct node));
  new_node.data=new_data;
  new_node.next=prev_node.next;
  prev_node.next=new_node;
  }
 void deletebeg(struct node** head, int key) {
  struct node *temp=*head,*prev;
  if(temp!= NULL && temp.data==key) {
  *head=temp.next;
  free(temp);
  }
  }
  void deleteend(struct node** head, int key)
  struct node* temp = head;
  while(temp.next.next!=NULL){
   temp = temp.next;
  }
  temp.next = NULL;
  }
  int searchNode(struct node** head, int key) {
  struct node* current = *head;
  while (current != NULL) {
  if (current.data == key) return 1;
  current = current.next;
  }
  return 0;
}
int main()
{
int ch;
do
  {
   printf("\n\n***SINGLY LINKED LIST OPERATION***\n1. Creation\n2. Insertion at front\n3. Insertion after particular node\n4. Deletion at front\n5. Deletion at end\n6. Searching\n7. Traversal\n8. Exit\nEnter your choice: ");
   scanf("%d", &ch);
   switch (ch) {
     case 1: create();
     break;
     case 2: insertAtFront();
     break;
     case 3: insert();
     break;
     case 4: deleteFirst();
     break;
     case 5: deleteLast();
     break;
     case 6: search();
     break;
     case 7: traverse();
     break;
     case 8: exit(0);
     default: printf("Invalid input");
       }
  }while(ch!=8);
    return 0;
}

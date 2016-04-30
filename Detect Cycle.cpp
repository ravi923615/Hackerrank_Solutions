/*
  Detect loop in a linked list 
  List could be empty also
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int HasCycle(Node* head)
{
   // Complete this function
   // Do not write the main method
    Node *temp1,*temp2;
    temp1 = head;
    temp2 = head;
    while(temp2!=NULL)
        {
        temp1 = temp1->next;
        temp2 = temp2->next->next;
        if(temp1==temp2)
            {
         return 1;
        }
    }
    return 0;
}

//Queue using linked list.............
 #include<iostream>
 using namespace std;
  class Queue{
    private:
        struct node{
               int data;
               node *next;
               }*front,*rear;
  public:
         Queue();
    void EnQueue(int item);
     int DeQueue();
       ~Queue();
};

// Constructor.......
 Queue::Queue(){
    front = NULL;
	rear = NULL;
    }
    
// create the Queue.....
 void Queue::EnQueue(int item){
    node *temp,*n;
     //if the Queue is empty create new......
    if(front==NULL){ 
        temp=new node;
        temp->data=item;
        temp->next=NULL;
        front=temp;
        rear=temp;
       }
   else
      {
        n=new node;
        n->data=item;
        rear->next=n;
        n->next=NULL;
        rear=n;
     }
}

// deleting  items from the Queue.....
 int Queue :: DeQueue(){
    node *temp;
    // if the Queue is empty.....
    if(front==NULL){
        cout<<"\nSorry!!....No more deleting,the Queue is empty.\n";
        return NULL;
        }
   else
    {
        temp=front;
     int data=front->data;
         cout<<"\nyou deleted  "<<data;
         front=front->next;
         delete temp;
   }
}

// destructor.....
 Queue::~Queue(){
    node *temp;
    // if the Queue is empty.....
    if(front==NULL){
        cout<<"\n Queue is empty\n";
        return;
        }
        
    while(front!=NULL){
           temp=front;
           front=front->next;
           delete temp;
           }
    }

// main function..............
 int main()
{
         Queue prince;
         int num,k,item;
         prince.EnQueue(1);
         prince.EnQueue(2);
         prince.EnQueue(3);
         prince.EnQueue(4);
         prince.EnQueue(5);
         prince.EnQueue(6);
         prince.EnQueue(7);
               cout<<"\nhow many items u want to delete(DeQueue)?\n";
               cin>>num;
               cout<<"\deleted elements are:\n";
         for(int i=0;i<num;i++)
         {
          prince.DeQueue();
           }
 return 0;
}

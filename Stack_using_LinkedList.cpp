// Implementation of stack using linked list
 #include<iostream>
 using namespace std;
  class Stack{
    private:
        struct node{
               int data;
               node *next;
               }*top;
  public:
         Stack();
    void push(int item);
     int pop();
       ~Stack();
};

// Constructor.......
 Stack::Stack(){
    top=NULL;
    }
    
// create the stack.....
 void Stack::push(int item){
    node *temp,*n;
     //if the stack is empty create new......
    if(top==NULL){ 
        temp=new node;
        temp->data=item;
        temp->next=NULL;
        top=temp;
       }
   else
      {
        n=new node;
        n->data=item;
        n->next=top;
        top=n;
     }
}

// poping out items from the stack.....
 int Stack :: pop(){
    node *temp;
    // if the stack is empty.....
    if(top==NULL){
        cout<<"\nSorry!!....No more poping,the stack is empty.\n";
        return NULL;
        }
   else
    {
        temp=top;
     int data=top->data;
         cout<<data<<" ";
         top=top->next;
         delete temp;
   }
}

// destructor.....
 Stack::~Stack(){
    node *temp;
    // if the stack is empty.....
    if(top==NULL){
        cout<<"\n stack is empty\n";
        return;
        }
        
    while(top!=NULL){
           temp=top;
           top=top->next;
           delete temp;
           }
    }

// main function..............
 int main()
{
         Stack prince;
         int num,k,item;
         prince.push(1);
         prince.push(2);
         prince.push(3);
         prince.push(4);
         prince.push(5);
         prince.push(6);
         prince.push(7);
               cout<<"\nhow many items u want to pop?\n";
               cin>>num;
               cout<<"\npoped elements are:\n";
         for(int i=0;i<num;i++)
         prince.pop();
 return 0;
}

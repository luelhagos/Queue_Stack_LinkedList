// LINKED LIST OPERATIONS USING C++............
#include<iostream>
using namespace std;
class linklist{
private:
struct node{
        int data;
        node *next;
        }*head;
public:
        linklist();
   void append(int num);
   void addbegen(int num);
   void addinpos(int pos,int num);
   void deleteFirst();
   void deleteLast();
   void deleteMiddle(int pos);
   void display();
   void counter();
   ~linklist();
    };

// CONSTRUCTOR.....
linklist::linklist(){
    head=NULL;  //intializing of the head
    }

//  CREATING OR APPENDING a node........
void linklist :: append(int num){
     node *n,*temp;
  // If The NODE Was Empty Create New NODE......
    if(head==NULL)
       {
         temp=new node;
         temp->data=num;
         temp->next=NULL;
          head=temp;
      }
// If The NODE Was Not Empty Append To The Exesting NODE.......
      else
         {
            n=new node;
            n->data=num;
            temp->next=n;
            n->next=NULL;
            temp=n;
         }
}

// FOR ADDING A NODE AT THE BEGINNING........
void linklist:: addbegen(int num){
    node *temp,*r;
// If The NODE Was Empty Create New NODE......
    if(head==NULL)
	{
          temp->data=num;
          head=temp;
    }
    else
       {
         temp=new node;
         temp->data=num;
         temp->next=head;
         head=temp;
       }
}
// INSERT IN A GIVEN POSITION.............
void linklist:: addinpos(int pos,int num){
    node *temp,*r;
    temp=head;
    for(int i=0;i<pos;i++)
	{
        temp=temp->next;
        if(temp==NULL)
		{
            cout<<"\n SORRY!! There are less than "<<pos<<" elements in the linked list\n";
             return;
        }
    }
        r=new node;
        r->data=num;
        r->next=temp->next;
        temp->next=r;
}

//DELETING THE FIRST NODE......
void linklist:: deleteFirst(){
    node *temp;
    temp=head;
    head=head->next;
    delete temp;
    }

// DELETING THE LAST NODE......
void linklist :: deleteLast(){
     node *cur,*pre;
      pre=head;
      cur=head->next;
  while(cur->next!=NULL)
  {
       pre=cur;
       cur=cur->next;
  }
      pre->next=NULL;
      delete cur;
}

//DELETES A NODE OF A GIVEN POSITION..........
void linklist ::  deleteMiddle(int num){
    node *cur,*temp;
    temp=head;
    while(temp!=NULL){
        if(temp->data==num)
		{
        if(temp==head)
            head=temp->next;
            else
            cur->next=temp->next;
            delete temp;
            return;
        }
    else
      {
        cur=temp;
         temp=temp->next;
        }
    }
}

//FOR DISPLAY THE ELEMENTS OF THE NODE.........
 void linklist::  display(){

        node *tempp;
        tempp=new node;
        tempp=head;
       // travere the entire linked list
        while(tempp!=NULL)
        {
            cout<<tempp->data<<" ";
            tempp=tempp->next;
        }
 }

// COUNTS THE NUMBER OF NODES AFTER EACH OPERATIONS....
void linklist :: counter(){
    int count=0;
    node *temp;
    temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
        }
cout<<count;
    }
    
//DESTRUCTOR......
linklist::~linklist()
 {
     node *q;
     while(head!=NULL)
     {
         q=head->next;
         delete head;
         head=q;
    }
}
     
// MAIN FUNCTION..........
int main(){
        int pos,num;
         linklist l;
                  l.append(1);
                  l.append(2);
                  l.append(3);
                  l.append(4);
                  l.append(5);
                  l.append(6);
                  cout<<"elements of the linked list  before any operation are:\n";
                  l.display();
                  cout<<" \nand the number of elements are ";
                  l.counter();
                               l.addbegen(100);
                               l.addbegen(200);
                               l.addbegen(300);
                               cout<<"\nelements of the linked list  aftre adding to the first node is given by:\n";
                               l.display();
                               cout<<" \nand the number of elements are ";
                               l.counter();
                                           cout<<"\nenter the position u want to add:\n";
                                           cin>>pos;
                                           cout<<"enter the number u want to add to  the position of  "<<pos<<endl;
                                           cin>>num;
                                           l.addinpos(pos,num);
                                           cout<<"\n Elements in the linked list after "<<pos<<" position:\n";
                                           l.display();
                                           cout<<" \nand the number of elements are ";
                                           l.counter();
l.deleteFirst();
cout<<"\n elements after deleting the first node:\n";
l.display();
cout<<" \nand the number of elements are ";
l.counter();
          l.deleteLast();
          cout<<"\n elements after deleting the last node:\n";
          l.display();
          cout<<" \nand the number of elements are  ";
          l.counter();
                    l.deleteMiddle(1);
                    cout<<"\n elements after deleting in the given  position :\n";
                    l.display();
                    cout<<" \nand the number of elements are  ";
                    l.counter();
return 0;
}

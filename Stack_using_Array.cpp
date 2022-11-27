//Stack Using Array......
  #include<iostream>
  const int MAX=12;
  using namespace std;
  class Stack{
  private:
   int top;
   int arr[MAX];
  public:
        Stack();
   void push(int item);
   void pop();
};

// constructor....
 Stack::Stack(){
       top=-1;   //empty stack(initializing).......
}

// create items to the array.....
  void Stack:: push(int item){
       if(top==MAX-1) //if array is full...
         {
           cout<<"Array is full...\n";
           return;
        }
     else{
        top++;
        arr[top]=item;
        }
 }

 // Remove elements from the array..
  void Stack:: pop(){
     if(top==-1){  // if array is full.....
           cout<<"Can not pop!! array is empty\n";
            }
      else
      {
       int data=arr[top];
           cout<<data<<" ";
           top--;
      }
}

 // main function...
  int main()
 {
       Stack prince;
       int item,num,k;
               prince.push(10);
               prince.push(12);
               prince.push(13);
               prince.push(14);
               prince.push(15);
               prince.push(90);
                     cout<<"\n how many values u want to pop?\n";
                       cin>>num;
                       cout<<"\n you poped out\n";
                            for(int i=0;i<num;i++){
                                   prince.pop();      
                                    }
  return 0;
 }

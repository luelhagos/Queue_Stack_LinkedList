//Implementing Circular Queue
 #include<iostream>
using namespace std;
const int SIZE=10;
class CircularQueue{
private:
        int CirQueue[SIZE],Front,Rear;
public:
        CircularQueue();
        void addQueue(int item);
        void deleQueue();
        void displayQueue();
};
CircularQueue::CircularQueue(){
Front=-1;
Rear=-1;
}
 void CircularQueue :: addQueue(int item){
 {
              if((Front == 0 && Rear == SIZE - 1) || (Front == Rear+1))
                   cout<<"\nNo More Insertion!! The Queue is Full!!\n";
else{
                          if(Rear == SIZE-1 && Front!= 0)
                           Rear = -1;
  CirQueue[++Rear] = item;
  if(Front== -1)
    Front= 0;
  }
}
 }
void CircularQueue:: deleQueue(){
              if(Front == -1 && Rear == -1)
                cout<<"\nimpossible!! it is  Empty!\n";
              else
              {
                    cout<<"\nDeleted item is="<< CirQueue[Front++];
              if(Front == SIZE)
                    Front = 0;
                 if(Front-1 == Rear)
                    Front = Rear = -1;
                }
    }

 void CircularQueue :: displayQueue()
    {
        int p;
        if(Front==-1) {
            cout << "\nEmpty Queue\n";
        }
        else
        {
        for(p=Front; p!=Rear;p=(p+1)%SIZE)
                cout <<" "<< CirQueue[p];
                cout<<" "<<CirQueue[Rear];
        }
    }
int main(){
CircularQueue prince;
prince.addQueue(1);
prince.addQueue(2);
prince.addQueue(3);
prince.addQueue(4);
prince.addQueue(5);
prince.addQueue(6);
prince.addQueue(7);
prince.addQueue(8);
prince.addQueue(9);
prince.addQueue(10);
prince.addQueue(11);
cout<<"after insertionan items\n";
prince.displayQueue();
prince.deleQueue();
prince.deleQueue();
prince.deleQueue();
prince.deleQueue();
prince.deleQueue();
cout<<"\nafter deletion of items \n";
prince.displayQueue();
prince.addQueue(12);
prince.addQueue(13);
prince.addQueue(14);
prince.addQueue(15);
cout<<"\nafter addition new items\n";
prince.displayQueue();
return 0;
}

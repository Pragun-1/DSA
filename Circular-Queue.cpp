#include<iostream>
#define MAX_SIZE 5
#include <vector>
using namespace std;



class CircularQueue{


private:
int front;
int rear;
int arr[MAX_SIZE];

public:
CircularQueue(){
    front =-1;
    rear=-1;
}
bool isFull(){
return ((front==0&&rear==MAX_SIZE-1)||(rear+1==front));
}
bool isEmpty(){
    return front == -1;
}

void Enqueue(int x){
    if(isFull()){
        std::cout<<"Queue is Overflowed!!!\n"<<endl;
        return;
    }
    if(front==-1){
        front =0;
    }
    rear = (rear+1)%MAX_SIZE;
    arr[rear]=x;
}
void Dequeue(){

    if(isEmpty()){
        std::cout<<"Queue is Underflowed!!!\n"<<endl;
        return;
    }
    if(front==rear){
        front=-1;
        rear=-1;
    }else{
        front =(front+1)%MAX_SIZE;
    }
}
void peek(){
if(isEmpty()){
     std::cout<<"Queue is Empty!!!\n"<<endl; 
     return;
}
std::cout<<"Front most element of the given Queue is : "<<arr[front]<<endl;

}
void Display(){
if(isEmpty()){
     std::cout<<"Queue is Empty!!!\n"<<endl; 
     return;
}
int i = front;
while(i!=rear){
    std::cout<<arr[i]<<endl;
    i=(i+1)%MAX_SIZE;
}
std::cout<<"The Rear Most bit is : "<<arr[rear];
}

};


int main(){

int value;

while(true){
    
    std::cout<<"************* Press 1 for Enqueue : Press 2 for Dequeue : Press 3 for Top Element : Press 4 for Rear Element : Press 5 for Exit : *************\n"<<endl;
    std::cin>>value;

    switch(value){

        case 1:
            std::cout<<"Enqueued Data.\n";
            break;
        case 2:
            std::cout<<"Dequed Data.\n";
            break;
        case 3:
            std::cout<<"Top Element.\n";
            break;
        case 4:
            std::cout<<"Rear Element.\n";
            break;
        case 5:
            std::cout<<"Exiting......\n";
            break;
        default:
            std::cout<<"You have entered some other value ... only use digits from 1 to 5.\nTry Again.......\n";
    }
    if(value==5){
        break;
    }

}

std::cout<<"Exited Successfully!!!\n"<<endl;


}
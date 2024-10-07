#include<iostream>
#include<vector>
#define MAX 1000
using namespace std;

class Queue {
public:
int front,rear,size;
int arr[MAX];

Queue(){
    front =0;
    rear = MAX-1;
    size = 0;
}
bool isEmpty(){
return (size ==0);
}

bool isFull(){
return (size==MAX);
}

void enqueue(int x){
if(isFull()){
    std::cout<<"The Queue is full.\n"<<endl;
   
}else{
rear = (rear+1)%MAX;
arr[rear] = x;
size++;
std::cout<<x<<" Element added to the Queue\n "<<endl;
}

}

void dequeue(){

    if(isEmpty()){
        std::cout<<"The Queue is empty is no more element can be added. \n"<<endl;
    }else{
        int temp = arr[front];
        front = (front+1)%MAX;
        size--;
        std::cout<<"Element has been Dequeued: "<<temp<<" . \n";

    }
}

void front_element()
{
    if(isEmpty())
    {
        std::cout<<"The Queue is empty.\n"<<endl;
    }else{
        std::cout<<"Front Element is : "<<arr[front]<<endl;

    }
}
void rear_element()
{
    if(isEmpty()){
        std::cout<<"The Queue is empty.\n"<<endl;
    }else{
        std::cout<<"Rear Element is : "<<arr[rear]<<endl;
    }
}

};


int main(){
std::vector<int>data;
int value ;
Queue q;

while(true){
std:: cout<<"************* To Enqueue press 1 : To Dequeue press 2: To Print front element 3 : To Print rear element press 4: To Exit press 5: ***********\n "<<endl;
std::cin>>value;
switch(value){

    case 1:
        std::cout<<"Enter The element you want to enqueue : \n"<<endl;
        int temp ;
        std::cin>>temp;
        q.enqueue(temp);

        break;
    case 2:
        std::cout<<"Element Dequeued : \n"<<endl;
        q.dequeue();
        break;
    case 3:
        std::cout<<"Front Element: \n"<<endl;
        q.front_element();
        break;
    case 4:
        std::cout<<"Rear Element : \n"<<endl;
        q.rear_element();
        break;
    case 5:
        break;

}
if(value==5){
    break;
}


}
std::cout<<"Exited Successfully \n"<<endl;


}
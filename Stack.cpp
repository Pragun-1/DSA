#include <iostream>
#include <vector>
using namespace std;
#define MAX 1000

class Stack {
int top;
public:
int a[MAX];
Stack (){top=-1;};

void Push(int x);
void Pop();
void isEmpty();
void Peek();



};

void Stack::Push(int x){
if(top >=(MAX - 1)){
std::cout<<"Stack has been overflowed!!!\n";
}else {
a[++top] = x;
std::cout<<"Element Added Successfully \n";
}

}
void Stack::Pop(){
    int x;
if(top<0){
    std::cout<<"Stack has been underflowed !!\n";
}else {
    x=a[top--];
    std::cout<<"Element has been removed : " <<x<<" Successfully\n";

}
}
void Stack::Peek(){
    int x;
if(top<0){
    std::cout<<"Zero elements are in inside stack\n";
}else{
    x=a[top];
    std::cout<<"Top element of the stack is : \n"<<x<<endl;
}
}
void Stack::isEmpty(){
bool empty_or_not = false;
empty_or_not = top<0;
if(empty_or_not == true){
std::cout<<"Stack is empty : \n"<<endl;
}else{
    std::cout<<"Stack is not empty\n"<<endl;

}
}
int main(){
std::vector<int> data;
int value;
Stack s;

while(true){
std::cout<<"********** To Push press 1:, To Pop press 2:, To peek press 3:, To Exit press 4: ************** \n";
std::cin>>value;

switch (value){

    case 1:
        int temp ;
        std::cout<<"Enter The value you want to add : \n"<<endl;
        std::cin>>temp;
        s.Push(temp);
        break;

    case 2:
        s.Pop();
        break;

    case 3:
        s.Peek();
        break;
    case 4:
        break;
    default :
        std:: cout<<"Please enter valid arugment : from 1 to 4 \n";
        break;

}
if(value == 4){
    cout<<"exited from the system successfully !!!"<<endl;
    break;
}
}
std:: cout<<std::endl;
return 0;

}

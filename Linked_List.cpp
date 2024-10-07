#include<iostream>
#include<vector>
#define MAX 10000
using namespace std;
// struct Node{
// int data;
// Node* next;
// };


// class Singly_Linked_List{
// private:
// Node* head;

// public:
// Singly_Linked_List():head(nullptr){}

// void insert_at_start(int value){
//     Node* newNode = new Node();
//     newNode->data=value;
//     newNode->next=head;
//     head=newNode;

// }
// void insert_at_end(int value){
//     Node* newNode = new Node();
//     newNode->data=value;
//     newNode->next=nullptr;

//     if(head==nullptr){
//         head=newNode;
//         return;
//     }

//     Node*temp = head;
//     while(temp!=nullptr){
//         temp=temp->next;
//     }
//     temp->next = newNode;
// }

// void Display(){
//     Node* temp = head;
//     while(temp!=nullptr){
//         std::cout<<temp->data<<" "<<endl;
//         temp=temp->next;
//         }
//     std::cout<<endl;
// }

// };

struct Node{

    int data;
    Node* next;
};




class Singly_Linked_List{
private:
Node* head;

public:
Singly_Linked_List():head(nullptr){};

void insert_at_start(int value){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next=head;
    head=newNode;

}

void insert_at_end(int value){
    Node* newNode =new Node();
    newNode->data=value;
    newNode->next=nullptr;


    if(head==nullptr){
        head=newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newNode;


}

void Display(){
    Node* temp=head;
    while(temp!=nullptr){
        std::cout<<temp->data<<endl;
        temp=temp->next;
    }
    std::cout<<endl;
}



};






























int main(){
int value;
Singly_Linked_List sl;

while(true){
    cout<<"*************** Press 1 for Inserting Data At Begining : Press 2 for Inserting Data At End : Press 3 for Displaying Data : Press 4 for Exiting :****************\n"<<endl;
    cin>>value;
switch(value){
    
    case 1:
        int x;
        std::cout<<"Enter The Data You Want Add  :\n";
        std::cin>>x;
        sl.insert_at_start(x);
        break;
    case 2:
        int y;
        std::cout<<"Enter The Data You Want Add  :\n";
        std::cin>>y;
        sl.insert_at_end(y);
        break;
    case 3:
        std::cout<<"Singly Linked List : \n";
        sl.Display();
        break;
    case 4:
        std::cout<<"Exiting......\n";
        break;

    default:
        std::cout<<"Please Enter Relevant Data : \n";
        break;

}
if(value == 4) {
   
    break;
}



}
 std::cout<<"Exited Successfully!!\n"<<endl;


}
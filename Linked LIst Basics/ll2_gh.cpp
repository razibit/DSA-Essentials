#include<iostream>
using namespace std;
//=================== a linked list with 7 nodes=============
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// void traversell(Node* head){
//     Node* current = head;
//     while(current != nullptr){
//         cout << current->data << " ";
//         current = current->next;
//     }
// }

// int main(){
//     Node *head = new Node;
//     head->data = 1;
//     head-> next = nullptr;

//     Node* current = head;
//     for(int i=2;i<=7;++i){
//         Node* newNode = new Node;
//         newNode->data = i;
//         newNode->next = nullptr;
//         current->next = newNode;
//         current = newNode;
//     }

//     traversell(head);

//     current = head;
//     while(current!=nullptr){
//         Node *temp = current;
//         current = current -> next;
//         delete temp;
//     }

// }
//====================linked list with 2 nodes==========
// struct Node{
//     int data;
//     Node* next;
// };

// void trvll(Node* head){
//     Node* current = head;
//     while(current != nullptr){
//         cout << current -> data << " ";
//         current = current->next;
//     }
// }

// int main(){
//     Node* head = new Node;
//     head->data = 1;
//     head->next= nullptr;

//     Node* second = new Node;
//     second->data = 2;
//     second->next = nullptr;

//     head-> next = second;

//     trvll(head);

//     delete head;
//     delete second;
//     return 0;
// }
//==================================================
// struct Node{
//     int data;
//     Node* next;
// };

// int main(){
//     Node* current = new Node;
//     current->data = 5;
//     current->next = nullptr;

//     cout << "Data: "<<current->data<<endl;
//     cout << "Next: "<<current->next<<endl;
//     delete current;
//     current = nullptr;
//     return 0;
// }
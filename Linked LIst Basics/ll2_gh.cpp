#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
void deleteAtEnd(Node*& firstNode){
    if(firstNode==nullptr){
        return;
    }
    if(firstNode->next == nullptr){
        delete firstNode;
        firstNode=nullptr;
        return;
    }
    Node* current = firstNode;
    while(current->next->next != nullptr){
        current = current -> next;
    }
    delete current->next;
    current->next = nullptr;
}
int main(){
    Node* head1 = nullptr;
    deleteAtEnd(head1);
    
}
//==========================(baki roise) insert a new node at the end of a linked list=============
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// void insertAtEnd(Node*& firstNode, int newData){
//     Node* newNode = new Node{newData,nullptr};
//     if(firstNode == nullptr){
//         firstNode = newNode;
//     }else{
//         Node* current = firstNode;
//         while(current->next != nullptr){
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }

// void printLL(Node* head){
//     Node* current = head;
//     while(current != nullptr){
//         cout << current-> data << " ";
//         current = current->next;
//     }
//     cout << endl;
// }

// int main(){
//     Node* head = nullptr;

//     insertAtEnd(head,1);
//     insertAtEnd(head,2);
//     insertAtEnd(head,3);

//     printLL(head);

//     while( head != nullptr){
//         Node* temp = head;
//         head = head-> next;
//         delete temp;
//     }
//     return 0;
// }
//===========================Simple Linked List Traversal=============================
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// void printLL(Node* head){
//     Node* current = head;
//     while(current != nullptr){
//         cout << current->data << " ";
//         current = current->next;
//     }
//     cout << endl;
// }
// int main(){
//     Node* head = new Node{1,nullptr};
//     head->next = new Node{8,nullptr};
//     head->next->next = new Node{3,nullptr};

//     printLL(head);

//     while(head != nullptr){
//         Node* temp = head;
//         head = head->next;
//         delete temp;
//     }
//     return 0;

// }
 //====================Insert a new node at the end of a linked list===================
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// void insertEnd(Node* head,int newData){
//     Node* newNode = new Node;
//     newNode->data = newData;
//     newNode->next = nullptr;

//     Node* current = head;
//     while(current->next != nullptr){
//         current = current->next;
//     }

//     current->next = newNode;
// }

// int main(){
//     Node* head = new Node;
//     head->data = 1;
//     head->next = nullptr;

//     Node* second = new Node;
//     second->data = 2;
//     second->next = nullptr;

//     head->next = second;

//     insertEnd(head,3);
//     insertEnd(head,4);
//     insertEnd(head,5);

//     Node* current = head;
//     while(current!=nullptr){
//         cout << current->data << " ";
//         current = current->next;
//     }

//     cout << endl;

//     delete head;
//     delete second;

//     return 0;
// }

//=========================Find the sum of all elements in a linked list===================
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// int sumLl(Node* firstNode){
//     int sum = 0;
//     Node* current = firstNode;
//     while(current != nullptr){
//         sum += current->data;
//         current = current->next;
//     }
//     return sum;
// }

// int main(){
//     Node* head = new Node;
//     head->data = 1;
//     head->next = nullptr;

//     Node* second = new Node;
//     second->data = 2;
//     second-> next = nullptr;

//     head->next = second;

//     Node* third =  new Node;
//     third->data = 3;
//     third->next = nullptr;

//     second-> next = third;

//     int totalSum = sumLl(head);
//     cout << "Sum of elements: "<< totalSum << endl;

//     delete head;
//     delete second;
//     delete third;

//     return 0;

// }

//===============Count the number of nodes in a linked list=================
// class Node{
//     public:
//     int data;
//     Node* next;
// };

// int countNodes(Node* head){
//     int count = 0;
//     Node* current = head;
//     while(current != nullptr){
//         count++;
//         current = current->next;
//     }
//     return count;
// }

// int main(){
//     Node* head = new Node;
//     head-> data = 1;
//     head-> next = nullptr;

//     Node* second = new Node;
//     second-> data = 2;
//     second-> next = nullptr;

//     head->next = second;

//     Node* third = new Node;
//     third-> data = 3;
//     third-> next = nullptr;

//     second->next = third;

//     int nodeCount = countNodes(head);
//     cout << "Num of Nodes: "<< nodeCount << endl;

//     delete head;
//     delete second;
//     delete third;

//     return 0;

    
//}
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
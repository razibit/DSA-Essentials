#include<iostream>
using namespace std;

class linkedlist{
    private:
    class Node{
        public:
            int data;
            Node *next;
            Node(int newData){
                data = newData;
                next = nullptr;
            }
    };

    Node* head;
    int size;

    public:
        linkedlist(){
            head = nullptr;
            size=0;
        }
    
    ~linkedlist(){
        Node *current = head;
        while(current != nullptr){
            Node *next = current->next;
            delete current;
            current = next;
        }
    }

};
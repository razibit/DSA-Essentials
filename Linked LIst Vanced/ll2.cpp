#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList{
    private:
        Node* head;
    public:
        LinkedList(){
            head = nullptr;
        }
        ~LinkedList(){
            while(head != nullptr){
                Node* temp = head;
                head = head->next;
                delete temp;
            }
        }

void insert(int value){
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void deleteNode(int value){
    Node* current = head;
    Node* prev = nullptr;

    while(current!=nullptr && current->data!=value){
        prev = current;
        current = current->next;
    }

    if(current!=nullptr){
        if(prev==nullptr){
            head = current->next;
        }
        else{
            prev->next = current->next;
        }
        delete current;
    }

}

void display(){
    Node* current = head;
    while(current != nullptr){
        cout << current -> data << " ";
        current = current->next;
    }
    cout << endl;
}
};


int main(){
    LinkedList list;

    list.insert(10);
    list.insert(25);
    list.insert(35);

    cout << "List: ";
    list.display();

    list.deleteNode(25);
    list.deleteNode(35);
    cout << "Updated List: ";
    list.display();

    return 0;
}

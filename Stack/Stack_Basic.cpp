#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> prcStack;
    prcStack.push(21);
    prcStack.push(45);
    prcStack.push(69);
    prcStack.push(34);
    prcStack.push(35);
    prcStack.push(40);

    int num = 10;
        prcStack.push(num);
    //prcStack.pop();
    //prcStack.pop();
    //prcStack.pop();
    
    while(!prcStack.empty()){
        cout << prcStack.top() << " ";
        prcStack.pop();
    }
}
#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int> prcstack;//practice_stack
    prcstack.emplace(2);
    prcstack.emplace(3);
    prcstack.emplace(5);
    prcstack.emplace(7);
    prcstack.emplace(9);

    cout << "Practice Stack = ";

    while(!prcstack.empty()){
        cout << prcstack.top() << " ";
        prcstack.pop();
    }
    return 0;
}
//===============add them to the stack , find sum and find the size of the stack without using the size function=================
// int main(){
//     stack<int> prcstack;
//     prcstack.push(5);
//     prcstack.push(13);
//     prcstack.push(0);
//     prcstack.push(9);
//     prcstack.push(4);
//     int sum = 0,c=0;
//     while(!prcstack.empty()){
//         sum += prcstack.top();
//         c++;
//         prcstack.pop();
//     }
//     cout << "Sum & size: " << sum << ' ' << c << endl;
// }
//=========================================
// int main(){
//     stack<int> prcstack;
//     prcstack.push(34);
//     prcstack.push(53);
//     prcstack.push(64);

//     while(!prcstack.empty()){
//         cout << " " << prcstack.top();
//         prcstack.pop();
//     }
// }
//==========================================
// int main(){
//     int sum = 0;
//     stack<int> prcstack;

//     prcstack.push(1);
//     prcstack.push(3);
//     prcstack.push(5);
//     prcstack.push(7);
//     prcstack.push(9);

//     cout << prcstack.size() << endl;

//     return 0;
// }
//==============================================
// int main(){
//     int sum = 0;
//     stack<int> prcstack;
    
//     for(int i=1;i<10;i=i+2){
//         prcstack.push(i);
//     }

//     while(!prcstack.empty()){
//         sum += prcstack.top();
//         prcstack.pop();
//     }
//     cout << sum;

// }
//==========================================
// int main(){
//     stack<int> prcstack;
//     prcstack.push(1);

//     if(prcstack.empty()){
//         cout << "True";
//     }
//     else{
//         cout << "False";
//     }
//     return 0;
// }
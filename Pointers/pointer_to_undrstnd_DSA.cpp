#include<iostream>
using namespace std;

struct person{
    string name;
    int age;
};

int main(){
    person *ptr = new person;
    ptr-> name = "john";
    ptr-> age =30;

    cout << "Name "<< ptr->name << "Age: "<< ptr->age << endl;
    delete ptr;
    return 0;
}
//===============================================
// int main(){
//     int *ptr = new int;
//     *ptr = 10;

//     cout << "value: "<< *ptr << endl;
//     delete ptr;
//     return 0;
// }
//===================================================
// int main(){
//     int arr[9] = {1,2,4,4,5,6,7,8,9};
//     int *ptr = arr;

//     cout << "first element: " <<*ptr << '\n';
//     cout << "first pointer index: "<<ptr << endl;
//     ptr++;
//     cout << "second pointer index: "<<ptr << endl;
//     cout << "second element: "<<*(ptr+1) << endl;
//     return 0;
// }
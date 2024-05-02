#include<iostream>
using namespace std;
//====================Dynamically Allocate an Array of Integers===========
int main(){
    int *arrr = new int[5];
    for(int i=0;i<5;i++){
        arrr[i] = i+5;
    }

    cout << "Array elements: ";
    for(int i=0;i<5;i++){
        cout << arrr[i] << " ";
    }
    cout << endl;
    delete[] arrr;

    return 0;
}
//==============================Dynamically Allocate an Integer=============
// int main(){
//     int *ptr = new int;
//     *ptr = 10;
//     cout << "Value stored at the address pointed by ptr: "<< *ptr << endl;
//     delete ptr;
//     return 0;
// }
// ====================Accessing Struct Members via Pointer to Array===========
// struct Student{
//     string name;
//     int age;
// };

// int main(){
//     Student stuList[3] = {{"Lawndawandaski",27},{"Bob",32},{"Charlie",23}};
//     Student *ptr = stuList;  
//     cout << "First Student - Name: " << ptr->name << ", Age: "<< ptr->age << " | Location(on memory): " << ptr<<  endl;
//     ptr++;
//     cout << "Second Student -Name: " << ptr->name << ", Age: " << ptr->age << " | Location(on memory): " << ptr << endl;
//     ptr++;
//     cout << "Third Student -Name: " << ptr->name << ", Age: " << ptr->age << " | Location(on memory): " << ptr << endl;

//     return 0;
// }


//==============================================
// class Student{
//     public:
//     string name;
//     int age;
// };

// int main(){
//     int numStu = 3;
//     Student *pntr = new Student[numStu];

//     pntr[0].name = "Lewandowski";
//     pntr[0].age = 36;

//     pntr[1].name = "Bob";
//     pntr[1].age = 29;

//     pntr[2].name = "Charlie";
//     pntr[2].age = 25;

//     for(int i=0;i<numStu;i++){
//         cout << "Name: " << pntr[i].name << " ,Age: "<< pntr[i].age << endl;

//     }

//     delete[] pntr;
    
//     return 0;


// }

//========================================
// class Student{
//     public:
//     string name;
//     int age;
// };

// int main(){
//     Student *pntr = new Student;
//     pntr -> name = "Rajib";
//     pntr -> age = 21;
//     cout << "Name: "<< pntr->name <<", Age: "<< pntr->age << endl;

//     pntr-> name = "Lotus";
//     pntr-> age = 22;
//     cout << "Name(upd.): "<< pntr->name << ", Age(upd.): "<< pntr->age << endl;
//     delete pntr;
//     return 0;

// }

/*
struct Student{
    string name;
    int age;
};

void displayStuInfo(Student *pointr){ //'Student' type *pointr
    cout << "Name: "<< pointr->name << ", Age: "<<pointr->age<<endl;
}

int main(){
    Student *ptr = new Student;
    ptr-> name = "Rajib";
    ptr->age = 22;

    displayStuInfo(ptr);

    delete ptr;
    return 0;
}
*/
//=======================================
/*
class Person{
    public:
    string name;
    int age;
};

void modifyPersonInfo(Person* ptr){
    ptr-> name = "Rajib";
    ptr->age = 22;
}

int main(){
    Person* ptr = new Person;
    ptr-> name = "Lotus";
    ptr->age = 21;

    modifyPersonInfo(ptr);
    cout << "Updated Name: "<< ptr->name<<", Updated age: "<<ptr->age<<endl;
    delete ptr; //crucial
    return 0;
}*/
//=======================================
// struct person{
//     string name;
//     int age;
// };

// int main(){
//     person *ptr = new person;
//     ptr-> name = "john";
//     ptr-> age =30;

//     cout << "Name "<< ptr->name << "Age: "<< ptr->age << endl;
//     delete ptr;
//     return 0;
// }
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
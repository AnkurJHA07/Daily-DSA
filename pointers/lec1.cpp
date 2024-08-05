#include<iostream>
using namespace std;
void update(int *p){
    *p = *p + 10;
}
int main(){
    // int arr[4] ={12,14,16,18};

//     cout << arr << endl;
//     cout << arr[0] << endl;
//     cout << &arr << endl;
//     cout << &arr[0] << endl;

//     int* p = arr;
//     cout << p << endl;
//     cout << &p << endl;


    // cout << *arr << endl;
    // cout << *arr + 1 << endl;
    // cout << *(arr+1) << endl;

    // int i =0;
    // cout << arr[i] << endl;
    // cout << i[arr] << endl; 
    // cout << *(arr+i) << endl;

    // int arr[10];
    // cout << sizeof(arr) << endl;


    // int *p = arr;
    // cout << sizeof(p) << endl;

    // char ch[10] = "Ankur";
    // char*c = ch;

    // cout << c << endl;

    // cout << ch << endl;
    // cout << &ch << endl;
    // cout << ch[0] << endl;

    // cout << &c << endl;
    // cout << *c << endl;
    // cout << c << endl;


    // char name[10] = "Sher Ankur";
    // char *cptr = & name[10];

    // cout << name;
    // cout << &name;
    // cout << *(name+3)
    // cout << cptr

    // char ch = 'k';
    // char* cptr = &ch;

    // cout << cptr << endl;

    int a = 5;
    cout << "address of a is " << &a << endl;
    int*ptr = &a;

    update(ptr);
    cout << "value of a is : "<< a << endl;



  
        return 0;
    }

    
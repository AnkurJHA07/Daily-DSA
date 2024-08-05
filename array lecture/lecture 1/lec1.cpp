// #include <iostream>
// using namespace std;
// int main(){
//     // int arr[7];
    
//     // cout << arr << endl;
    
//     int arr[10] = {2,4,6,8,9};
//     int brr[2] = {2,4};
//     cout << "array created " << endl;
//     return 0; 
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[50];
//     int n;

//     cout << "how many numbers you want to add in array" << endl;
//     cin >> n;

//     cout << "Enter the numbers" << endl;
//     for(int i=0; i<n; i++){
//         cin >> arr[i];
//     }
//     //print doubles
//     cout << "doubles:";
//     for(int i = 0; i<n; i++){
//         cout << 2*arr[i] << " ";
//     }

//     return 0;

   
// }

#include <iostream>
using namespace std;
int main(){
    int arr[500];

    int n;
    cout << "How many numbers you want to add in array" << endl;

    cin >> n;
    cout << "enter the numbers" << endl;
    for(int i=0; i<n; i++){
        arr[i] = 1;
    }
    //print one
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}

 
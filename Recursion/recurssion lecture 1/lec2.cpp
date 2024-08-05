// #include <iostream>
// using namespace std;

//     //base case - stopping condition
// int climbstairs(int n){
//     if(n==0 || n==1)
//         return 1;

//     int ans = climbstairs(n-1) + climbstairs(n-2);
//     return ans;
// }
// int main(){

//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;

//     int ans = climbstairs(n);
//     cout << "Answer is :" << ans << endl;


//     return 0;
// }

#include <iostream>
using namespace std;

void print(int arr[], int n, int i){
    //base case
    if(i >= n){
        return;
    }

    //1 case solve krdia
    cout << arr[i] << " ";
    //baaki recursion sambhal lega
    print(arr, n, i+1);
}
int main(){

    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int i = 0;
    print(arr, n, i);
} 
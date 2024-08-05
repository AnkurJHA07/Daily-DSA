 #include<iostream>
 #include <vector>
 using namespace std;

 void printRowsiseSum(int arr[][3], int rows, int cols){
    //row-sum -> row-wise traveseral
    cout << "printin row-size sum" << endl;
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum + arr[i][j];
        }
        cout << sum << endl;
    }
 }
 int main(){
    int arr[4][3];
    int rows = 4;
    int cols = 3;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }
    cout << "printing row wise" << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout <<  arr[i][j] << " ";
 }
        printRowWiseSum(arr, rows, cols):
       
    cout << endl;
    }
     return 0;
    
 }
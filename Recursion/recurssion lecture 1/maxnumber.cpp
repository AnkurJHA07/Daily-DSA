#include<iostream>
#include<climits>
using namespace std;

void findMax(int arr[], int n,int i, int& maxi){
    //base case
    if(i >= n){
        //array agar khtham hogya, poora traverse hogya 
        //toh wapas aa jau
        return;

    }
    //1 case solve krna h 
    //current element ko check kro for max
    if(arr[i] > maxi){
        maxi = arr[i];
    }

    //bakki recursion sambhal lega
    findMax(arr, n, i+1, maxi);
}

void findMin(int arr[], int n, int i, int& mini){
    //base case
    if(i >= n){
        return;
    }

    //1 case solve kr do
    mini = min(mini, arr[i]);

    //bakki recursion dekh lega
    findMin(arr, n, i+1, mini);
}
int main(){
    int arr[] = {10,30,21,44,32,17,19,66};
    int n = 8;

    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i =0;
    findMax(arr, n,i,maxi);
    findMin(arr, n,i,mini);
    cout << "maximum number is:" << maxi << endl;
    cout << "minimum number is:" << mini << endl;
    ab
}
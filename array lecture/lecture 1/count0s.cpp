#include <iostream>
using namespace std;
int main(){
    int arr[] = {0,1,1,1,0,0,0,0,1,0,1,0,1,0,1};

    int size = 15;

    int numzero = 0;
    int numOne = 0;
    for(int i = 0; i<size; i++){
        if(arr[i] ==0){
            numzero++;
        }
        //if one found, increment numOne
        if(arr[i] == 1){
            numOne++;
        }
    }
    cout << "number of zeros" << numzero << endl;
    cout << "number of ones" << numOne << endl;
}
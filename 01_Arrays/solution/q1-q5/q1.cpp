// Find the smallest number in an array
#include<iostream>
using namespace std;

void findsmall(int arr[], int size){
    int mini=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini =arr[i];
        }
    }
    cout<<"smallest element in Array is :"<<mini<<endl;
}

int main(){
    int arr[]={2,3,1,0,5,32,11,8,20,12,-5,-23}; //smallest element in Array is :-23
    int size=sizeof(arr)/sizeof(arr[0]);
    findsmall(arr,size);
    return 0;
}
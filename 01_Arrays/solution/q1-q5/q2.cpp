//Find the largest number in an array
#include<iostream>
using namespace std;

void findsmall(int arr[], int size){
    int maxi=INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i]> maxi){
            maxi =arr[i];
        }
    }
    cout<<"Largest element in Array is :"<<maxi<<endl;
}

int main(){
    int arr[]={2,3,1,0,5,32,11,8,20,12,-5,-23};  //Largest element in Array is :32
    int size=sizeof(arr)/sizeof(arr[0]);
    findsmall(arr,size);
    return 0;
}

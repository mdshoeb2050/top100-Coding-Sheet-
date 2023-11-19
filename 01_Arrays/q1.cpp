//Find the smallest number in an array
#include<iostream>
#include<climits>
using namespace std;

void findmini(int arr[], int size){
    int mini=INT_MAX;
    for(int i=0; i<size; i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    cout<<"smallest number in an array :"<<mini<<endl;
}
int main(){
    int arr[]={3,7,8,1,-5,2,9};
    int size=sizeof(arr)/sizeof(arr[0]);

    findmini(arr,size);
    return 0;
}

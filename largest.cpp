#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i]){
            cout<<arr[i];
        }
    }
    return 0;
}
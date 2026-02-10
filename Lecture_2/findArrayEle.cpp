#include<iostream>
using namespace std;
int main(){
    int n;
    int f=0;
    int ele;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter Ele you want to find : ";
    cin>>ele;
    for(int i=0;i<n;i++){
        if(ele==arr[i]){
            f=1;
        }
    }
    if(f==0){
        cout<<"Element not found";
    }else cout<<"Elemnt fount";
    return 0;
}
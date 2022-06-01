#include<bits/stdc++.h>
using namespace std;
void findMP(int arr[],int n){
    if(n<2){
        return;
    }
    sort(arr,arr+n);
    if((arr[0]*arr[1])>(arr[n-1]*arr[n-2])){
        cout<<"pair is "<<arr[0]<<" "<<arr[1];
    }
    else{
        cout<<"pair is "<<arr[n-1]<<" "<<arr[n-2];
    }
}
int main(){
    int arr[]={-10,-3,5,6,-20};
    int n=sizeof(arr)/sizeof(arr[0]);
    findMP(arr,n);
    return 0;
}
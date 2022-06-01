#include<bits/stdc++.h>
using namespace std;
int max(int x,int y){
    return(x>y)?x:y;
}
int maxdiff(int arr[],int n){
    int diff=INT_MIN;
    if(n==0){
        return diff;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                diff=max(diff,arr[j]-arr[i]);
            }
        }
    }
    return diff;
}
int main(){
    int arr[]={2,7,9,5,1,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=maxdiff(arr,n);
    if(result!=INT_MIN){
        cout<<"the maximum difference is "<<result<<endl;
    }
    return 0;
}
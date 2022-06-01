#include<iostream>
#include<algorithm>
using namespace std;
void findpair(int arr[],int n,int target){
    sort(arr,arr+n);
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==target){
            cout<<"pair found("<<arr[low]<<","<<arr[high]<<")\n";
            return;
        }
        (arr[low]+arr[high]<target)?low++:high--;
    }
    cout<<"Pair not found";
}
int main(){
     int arr[]={8,7,2,5,3,1};
    int target=10;
   int n=sizeof(arr)/sizeof(arr[0]);
   findpair(arr,n,target);
    return 0;
}
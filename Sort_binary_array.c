#include<stdio.h>
int sort(int arr[],int n){
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            arr[k++]=0;
        }
    }
    for(int i=k;i<n;i++){
        arr[k++]=1;
    }
}
int main(){
     int arr[]={0,0,0,1,0,1,0,1,1};
   int n=sizeof(arr)/sizeof(arr[0]);
   sort(arr,n);
   for(int i=0;i<n;i++){
       printf("%d",arr[i]);
   }
    return 0;
}
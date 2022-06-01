#include<stdio.h>
void findpair(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("pair found (%d,%d)\n",arr[i],arr[j]);
                return ;
            }
        }
    }
    printf("Pair not found");
}
int main(void){
    int arr[]={8,7,2,5,3,1};
    int target=10;
   int n=sizeof(arr)/sizeof(arr[0]);
   findpair(arr,n,target);
    return 0;
}
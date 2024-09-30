// #peak index in mountain array
#include<iostream>
using namespace std;
int mountain(int arr[],int n ){
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
          start = mid+1;
        }
        else {
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main(){
    int arr[6]={0,1,3,6,8,10};
    cout<<"the peak index in mountain is:"<<mountain(arr,6);

}
//first and last position  in sorted array
#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int>&arr, int n , int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(key==arr[mid]){
            ans = mid;
            e = mid-1;
             
        }
        else if(key>arr[mid]){
           s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    // mid = s + (e-s)/2;
    return ans;
}
int lastOcc(vector<int>&arr, int n , int key){
    int s = 0;
    int e = n-1;
    int ans = -1;
    int mid = s+(e-s)/2;
    
    while(s<=e){
        if(key==arr[mid]){
            ans = mid;
            s = mid+1;
             
        }
        else if(key>arr[mid]){
           s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    // mid = s + (e-s)/2;
    return ans;
}
pair<int , int>firstAndLastPosition(vector<int>&arr, int n , int key){
    pair <int,int>p;
    p.first = firstOcc(arr,n,key);
    p.second = lastOcc(arr,n,key);
    return p;
}

int main(){
vector<int>arr={1,2,4,6,8,8,8,8,10};
int n = arr.size();
int key = 8;
// cout<<"the first index of 8 is:"<<firstOcc(arr,n,key)<<endl;
// cout<<"the last index of 8 is:"<<lastOcc(arr,n,key)<<endl;
pair<int,int> result = firstAndLastPosition(arr,n,key);
cout<<"the first and last index of occurrence is:"<<result.first<<" "<<result.second;
return 0;
}
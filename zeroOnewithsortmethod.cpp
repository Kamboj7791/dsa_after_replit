#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={0,1,1,0,1};
 
    sort(arr.begin(),arr.end());
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }

}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>zeroOne(vector<int>&arr){
    int n = arr.size();
 int i=0 , j=n-1;
 while(i<=j){
     if(arr[i]==0){
        i++;
     }
     else if(arr[j]==1){
        j--;
     }
     else{
        swap(arr[i], arr[j]);
        i++;
        j--;
     }
 }
 return arr;
}
int main(){
    vector<int>arr={0,1,0,1,0,0,1};
    zeroOne(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;

}
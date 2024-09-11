#include<iostream>
#include<vector>
using namespace std;
vector<int>threePointer(vector<int>&arr){
    int n = arr.size();
    int i =0,j=0 ,k=n-1;
    while(j<=k){
        switch(arr[j]){
            case 0:swap(arr[j],arr[i]);
            j++;
            i++;
            break;
            case 1: j++;
            break;
            case 2: swap(arr[j],arr[k]);
            k--;
            j++;
        }
    }
    return arr;
}
int main(){
    vector<int>arr={1,0,2,1,0,2,1};
    cout<<"array before sorting:";
    for(int sol:arr){
        cout<<sol<<" ";
    }
    cout<<endl;
    threePointer(arr);
    cout<<"array after sorting:";
    for(int sol:arr){
        cout<<sol<<" ";
    }

}
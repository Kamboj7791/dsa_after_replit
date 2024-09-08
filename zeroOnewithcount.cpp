#include<iostream>
#include<vector>
using namespace std;

vector<int>zeroOne(vector<int>&arr){
    int zeroCount=0;
    int n = arr.size();
    for(int num:arr){
        if(num==0){
          zeroCount++;
        }
    }
    for(int i=0; i<n;i++){
        if(i<zeroCount){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
    }
    return arr;
}

int main(){
vector<int>arr={1,0,1,0,0,1};
cout<<"orginal array:";
for(int num:arr){
    cout<<num;
}
cout<<endl;
zeroOne(arr);
cout<<"sorted array:";
for(int num:arr){
    cout<<num;
}
return 0;

}
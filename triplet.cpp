#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>triplet(vector<int>&arr, int t){
int n = arr.size();
vector< vector<int>>ans;
for(int i=0; i<n; i++){
    // cout<<i<<" ";
    for(int j =i+1; j<n; j++){
        // cout<<j<<" ";
        for(int k =j+1; k<n; k++){
            // cout<<i<<j<<k;//checking iteration
            // cout<<endl;
           
          if(arr[i]+arr[j]+arr[k]==t){
            vector<int>temp={arr[i],arr[j],arr[k]};
            // temp.push_back(min(arr[i],arr[j],arr[k]));
            // temp.push_back(max(arr[i],arr[j],arr[k]));
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
          }
         
        }
    }
}
sort(ans.begin(),ans.end());
return ans;
}
int main(){
    vector<int>arr={1,2,3,4,5,6,7,8};
    int t =12;
    vector<vector<int>>sol=triplet(arr,t);
    for(const auto & triplet:sol){
        cout<<triplet[0]<<" "<<triplet[1]<<" "<<triplet[2]<<endl;

    }
return 0;
}
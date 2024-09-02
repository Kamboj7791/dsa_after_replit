#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int> intersection(vector<int> & array1 ,vector<int> &array2){
    int n = array1.size();
    int m = array2.size();
    vector<int>ans;
// for(int i=0; i<n; i++){
//     int element = array1[i];
//     for(int j=0; j<m; j++){
//         if(element==array2[j]){
//              ans.push_back(element);
//              array2[j]=INT_MIN;
//              break;
//         }
//     }
// }
//OPTIMISED SOLUTION=>
int i =0, j=0; 
while(i<n && j<m){

if(array1[i]==array2[j]){
    ans.push_back(array1[i]);
    i++;
    j++;
}
else if(array1[i]<array2[j]){
    i++;
}
else{
    j++;
}

}
return ans;
}
int main(){
    vector<int>array1={1,2,4,5,8};
    vector<int>array2={2,4,8};
    vector<int>ans = intersection(array1,array2);
    for(int sol:ans){
        cout<<sol<<" ";

    }
    cout<<endl;
    

}

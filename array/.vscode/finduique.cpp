// find unique element if only one element is unique
#include<iostream>
using namespace std;

int uniqueNum(int arr[], int n){
    int ans=0;
    for(int i= 0; i<n; i++){
        ans=ans^arr[i];
    }
 return ans;
   
}

int main(){
    int arr[]={2,10,112,10,13,2,15,13,15};
    int n=9;

    int final = uniqueNum (arr , n);
    cout<<final<<endl;
    
}
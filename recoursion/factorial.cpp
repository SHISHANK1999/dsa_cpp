// Factorial of n
#include<iostream>
using namespace std;
int fact(int n){
    //base case
    if(n==0 || n==1){
    return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n=5;
    int ans=fact(n);
    cout<<ans;

    return 0;
}
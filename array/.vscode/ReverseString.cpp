//Reverse a string
#include <iostream>
using namespace std;
int reversearr(char arr[],int n){
    char reversearr[n],i;
    for(int i=0;i < n; i++){
   reversearr[i] = arr[n - i - 1];
    }
    
    for(int i=0;i < n; i++)
    cout<<reversearr[i];
    
    return 0;
}

int main(){
    char arr[]={'h','e','l','l','o'};
    int n=5;
    
    reversearr(arr,n);

}
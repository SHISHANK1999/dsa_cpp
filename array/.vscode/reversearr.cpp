//Reverse an array
#include <iostream>
using namespace std;
int reversearr(int arr[],int n){
    int reversearr[n],i;
    for(int i=0;i < n; i++){
   reversearr[i] = arr[n - i - 1];
    }
    
    for(int i=0;i < n; i++)
    cout<<reversearr[i];
    
    return 0;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    
    reversearr(arr,n);

}

// {
//     int a=4,b=6,temp;
//     cout<<a<<endl<<b;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<a<<endl<<b;
// }
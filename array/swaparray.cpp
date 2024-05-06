#include<iostream>
using namespace std;
int main(){
    int arr[20]={ 12,122,23,144,134,200,111};
    int temp=arr[0];
    int i,j;

    for(i=1;i<7;i++){
        for(j=i;j<i;j++){
               arr[i]=arr[j];
               arr[j]=temp;
               temp=arr[i];

             //  cout<<arr[i]<<endl;
           }
              // cout<<arr[i]<<endl;

    }
               cout<<arr[i]<<endl;

}
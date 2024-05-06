#include<iostream>
using namespace std;
int main()
{
    int arr[10]={0,0,1,0,0,1,1,0,1,0};
    // 6 zero
    int i,n,countzero =0,countone=0;
    for(i=0;i<10;++i)
    cout<<arr[i]<<" ";
    
    for(i=0;i<10;++i){
    if(arr[i]==0){
    countzero++;
    
    }
    
    if(arr[i]==1){
    countone++;
  
    }
    
    }
    cout<<endl<<"countzero="<<countzero;
    cout<<endl<<"countone="<<countone;

     //sorting for ek side zero or one kr deya.

   for(i=0;i<countzero;i++){
    arr[i]=0;
   }
   for(int i=countzero;i<n;i++){
    arr[1]=1;
   }

   for(i=0;i<n;i++)
   cout<<arr[i];
}
// void count (int arr[],int n){
//     int zero=0;
//     int one=0;
    
//     for(int i=0;i<=n;i++){
//         if(arr[i] == 0){
//             zero++;
//         }
//         if(arr[i] == 1){
//             one++;
//         }
//     }
   
//     cout<<one<<endl;
//     cout<<zero<<endl;
// }
// int main(){
//     int arr[]={1,0,0,1,1,1,0,0,1,0,1,0,1,0,1};
//     int n=15;
//      count(arr,n);
    
// }
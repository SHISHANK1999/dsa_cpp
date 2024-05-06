#include<iostream>
using namespace std;

void targetfound(int arr[],int n){
    bool flag=0;
   int target=6;
   for( int i=0;i<=n;++i){
        if(arr[i] == target){
        flag=1 ;
        break;
        }
    }
    if(flag == 1)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
}
int main(){
    int arr[10]={1,2,3,4,5,6};
    int n=6;
    targetfound(arr,n);
}
// int main(){
//     int arr[10]={1,2,3,4,5,6};
//     int i,n=6 ;
//     bool flag=0;
//     int target=4;

//     for(i=0;i<=n;++i){
//         if(arr[i] == target){
//         flag=1 ;
//         break;
//         }
//     }
//     if(flag == 1)
//     cout<<"yes"<<endl;
//     else
//     cout<<"no"<<endl;
       
    
// }
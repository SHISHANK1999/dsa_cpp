#include<iostream>
using namespace std;

int count(int arr[], int n){
    int countzero=0;
    int countone=0;
    int counttwo=0;
    for(int i=0;i<n;++i){
    if(arr[i]==0){
    countzero++;
    }
    if(arr[i]==1){
    countone++;
    }
    if(arr[i]==2){
    counttwo++;
    }
    }
    cout<<endl<<"countzero="<<countzero;
    cout<<endl<<"countone="<<countone;
    cout<<endl<<"counttwo= "<<counttwo;
}

int main() {
    int arr[]={0,1,0,2,1,0,1,1,2,1,2,0,1,1,0};
    int n=15;
    
    count(arr,n);
    return 0;
}
// int main()
// {
//     int arr[10]={0,0,1,0,0,1,1,0,1,0};
//     // 6 zero
//     int i,countzero =0,countone=0;
//     int n=10;
//     for(i=0;i<10;++i)
//     cout<<arr[i]<<" ";
    
//     for(i=0;i<10;++i){
//     if(arr[i]==0){
//     countzero++;
    
//     }
    
//     if(arr[i]==1){
//     countone++;
  
//     }
    
//     }
//     cout<<endl<<"countzero="<<countzero;
//     cout<<endl<<"countone="<<countone<<endl;
//     //sorting 

//    for(i=0;i<countzero;i++){
//     arr[i]=0;
//    }
//    for(int j=i;j<n;j++){
//     arr[j]=1;
//    }

//    for(i=0;i<n;i++)
//    cout<<arr[i];
// }
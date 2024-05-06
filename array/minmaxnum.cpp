#include<iostream>

using namespace std;
void check(int arr[],int n){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<=n;i++){
      if(arr[i]<min){
     min=arr[i];
     }
     
      if(arr[i]>max){
     max=arr[i];
     }

    }
    cout<<min<<endl;
    cout<<max<<endl;

}

int main(){
    int arr[]={5,3,2,543,23,21,35,90,7,765,50,534,453,99,1};
    int n=15;
     check(arr,n);
     return 0;
}   











// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[20]={ 12,122,23,144,134,200,111};
//     int min = arr[0];
//     int max = arr[0];
//     int i,n=7;
    
//     for(i=0;i<n;++i){
//         cout<<arr[i]<<endl;
//     }
//     for (int i = 1; i < n ; i++) {
//         if (arr[i] < min)
//             min = arr[i];

//         if (arr[i] > max)
//             max = arr[i];
        
//     }
//      cout<<"min= "<<min<<endl<<"max= "<<max;
//     //cheack minmum element

// } ;// namespace std;


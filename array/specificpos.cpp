#include<iostream>
using namespace std;
int main(){
    int arr[50]={1,2,3,4,5,6,7,8,9};
    int n=9,i,x,y,pos1,pos2=3;
    //enter the size of an array
    // cout<<"enter the size of an array =";
    // cin>>n;
    // cout<<"enter array elemient=";
    // for(i=1;i<=n;i++){
    //     cin>>arr[i];
    // }
    //print th earray
    cout<<"print th array"<<endl;

    for(i=1;i<=n;i++){
    cout<<arr[i]<<endl;
    }
    //insert in array
    cout<<"insert in array"<<endl;
    //enter the element
    cout<<"enter the element=";
    cin>>x;
    cout<<"enter the position=";
    cin>>pos1;
    //check whether the insert is possible or not 
    if (pos1 < 0 || pos1 > n) {
    cout << "Invalid position" << endl;
    return 0;
  }
    n++;
    // use for loop to insert the element and update the index 
    for(i=n-1;i>=pos1;--i){
         
         arr[i + 1] = arr[i];
    }
    
    arr[pos1] = x;

     // display the final array  
    for(i=1;i<=n;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Define the position of the array element where you want to delete: "<<endl;
//    cin>>pos2;
      
    // check whether the deletion is possible or not  
    if (pos2 > n)  
    {  
        cout<<"not posibile";
    }  
    else  
    {  
        // use for loop to delete the element and update the index  
        for (i = pos2; i <= n -1; i++)  
        {  
            arr[i] = arr[i+1]; // assign arr[i+1] to arr[i]  
        }  
          
        cout<<"delete an array"<<endl;
          
        // display the final array  
        for (i = 1; i<= n-1; i++)  
        {  
            cout<<arr[i]<<endl;
        }  
    }  
}

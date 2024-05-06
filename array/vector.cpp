#include <iostream>
#include<vector>
using namespace std;

void print(vector<int> v) {
  cout << "Printing vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  }
  cout << endl;
}


void print2(vector<int>v){
    cout<<"printf array"<<endl;
    for(auto it:v){
        cout<<it<<endl;
    }
    cout<<endl;
}

int main() {
	vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	print(v);
	print2(v);
    }
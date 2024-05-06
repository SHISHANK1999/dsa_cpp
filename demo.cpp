#include <iostream>
using namespace std;
int voteAge(int age)
{
    if (age>=18)
    cout<<"yes";
    else
    cout<<"no";
}

int main()
{
	int age;
	cout<<"\nEnter age=";
	cin>>age;
 
  cout << voteAge(age) << endl;
  
	return 0;
}
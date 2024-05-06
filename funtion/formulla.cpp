#include<iostream>
using namespace std;
int formulla(int x, int y)
{
   return x*x+y*y+2*x*y; 
}
int main()
{
    int a,b;
    cin>>a>>b;
    int rule=formulla(a,b);
    cout<<rule;
    return 0;

}
    // int A, B;
    //     cin >> A >> B;
        
    //     int C = A * A + 2 * A * B + B * B;
    //     int D = A + B;
        
    //     cout << C << endl;
    //     cout << D << endl;

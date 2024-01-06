#include <iostream>
using namespace std;

void PalindromeTriangle(int n){
    for (int i=1; i<=n; ++i){
        for (int k=n-i; k>0; --k){
            cout<<"  ";
        }
        for (int j=1; j<=i; ++j){
            cout<<j<<" ";
        }
        for (int j=i-1; j>0; --j){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter number of layers:";
    cin>>n;
    PalindromeTriangle(n);

    return 0;
}
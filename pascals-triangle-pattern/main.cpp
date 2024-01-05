#include <iostream>
using namespace std;

void Pascals_Triangle(int n){
    for (int i=1; i<=n; ++i){
        for (int k=n-i; k>0; --k){
            cout<<" ";
        }
        for (int j=1; j<=i; ++j){
            cout<<j;
        }
        for (int x=i-1; x>0; --x){
            cout<<x;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of lines: ";
    cin>>n;
    Pascals_Triangle(n);

    return 0;
}
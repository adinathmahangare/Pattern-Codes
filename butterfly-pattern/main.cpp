#include <iostream>
using namespace std;

void Butterfly(int n){
    for (int i = 1; i<=n; ++i){
        for (int j = 1; j<=i; ++j){
            cout<<"* ";
        }
        for (int k = n-i; k>0; --k){
            cout<<"    ";
        }
        for (int y = 1; y<=i; ++y){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i = 0; i<=n; ++i){
        for (int j = n-i; j>0; --j){
            cout<<"* ";
        }
        for (int k = 1; k<=i; ++k){
            cout<<"    ";
        }
        for (int y = n-i; y>0; --y){
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    Butterfly(n);

    return 0;
}
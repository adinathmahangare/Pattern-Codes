#include <iostream>
using namespace std;

void Diamond(int n){
    for (int i = 1; i <= n; ++i){
        for (int k = n-i; k>0; --k){
            cout << " ";
        }
        for (int j = 0; j< 2*i - 1; ++j){
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = n-1; i>0; --i){
        for (int k = n-i; k>0; --k){
            cout << " ";
        }
        for (int j = 2*i - 1; j>0; --j){
            cout << "*";
        }
        cout << endl;
    }
    
}

int main()
{
    int n;
    cout<<"Enter the number which is half of total lines:";
    cin>>n;
    Diamond(n);

    return 0;
}
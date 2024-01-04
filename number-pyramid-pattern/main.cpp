#include <iostream>
using namespace std;

void Number_Pyramid(int n){
    for (int i = 1; i <= n; ++i){
        for (int j = n-i; j>0; --j){
            cout << " ";
        }
        for (int k = 1; k <= i; ++k){
            cout << i << " ";
        }
        cout<<endl;
    }
}


int main()
{
    int n;
    cout<<"Enter the number till which you want to print:";
    cin>>n;
    Number_Pyramid(n);

    return 0;
}
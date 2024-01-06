#include <iostream>
using namespace std;

void SquareDiagonals(int n){
    for (int i = 0; i<n; ++i){
        for (int j = 0; j<n; ++j){
            if (i==0 || i == n-1 || j == 0 || j == n-1 || i==j || i+j == n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter side of the square:";
    cin>>n;
    SquareDiagonals(n);

    return 0;
}
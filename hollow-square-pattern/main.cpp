#include <iostream>
using namespace std;

void Hollow_Square(int n){
    for (int i = 1; i<=n; ++i){
        for (int j = 1; j<=n; ++j){
            if (i==1||i==n||j==1||j==n){
                cout << "* ";
            }
            else{
               cout<<"  "; 
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the side of square:";
    cin>>n;
    Hollow_Square(n);

    return 0;
}
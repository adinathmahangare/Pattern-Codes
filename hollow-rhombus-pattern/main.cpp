#include <iostream>
using namespace std;

void Hollow_Rhombus(int n){
    for (int i = 1; i<=n; ++i){
        for (int x = n-i; x>0; --x){
            cout << " ";
        }
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
    cout<<"Enter the side of the rhombus:";
    cin>>n;
    Hollow_Rhombus(n);

    return 0;
}
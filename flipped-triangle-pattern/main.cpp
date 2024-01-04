#include <iostream>
using namespace std;

void flipped_triangle(int n){
    for (int i=0; i<=n; ++i){
        for (int j=n-i; j>0; --j){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter number of lines in a triangle:";
    cin>>n;
    flipped_triangle(n);

    return 0;
}
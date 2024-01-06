#include <iostream>
using namespace std;

void FloydsTriangle(int n){
    int k = 1;
    for (int i=1; i<=n; ++i){
        for (int j=1; j<=i; ++j){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter number of layers:";
    cin>>n;
    FloydsTriangle(n);

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r = 0; r<n; r = r+1){
        //spaces
            for(int c = 0; c<r+1; c = c+1){
                cout<<" ";
            }
            //stars
           for(int c = 0; c<n-r-1; c = c+1){
                cout<<"* ";
            }
            cout<<endl;
    }
}
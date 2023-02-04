#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int r = 0; r<n; r = r+1){
        //half pyramid
            for(int c = 0; c<n-r; c = c+1){
                cout<<"*";
            }
            //space full pyramid
           for(int c = 0; c<2*r+1; c = c+1){
            cout<<" ";
           }
           for(int c = 0; c<n-r; c = c+1){
                cout<<"*";
            }
            cout<< endl;
    }

    for(int r = 0; r<n; r = r+1){
        //half pyramid
            for(int c = 0; c<r+1; c = c+1){
                cout<<"*";
            }
            //space full pyramid
           for(int c = 0; c<2*n-2*r-1; c = c+1){
            cout<<" ";
           }
           for(int c = 0; c<r+1; c = c+1){
                cout<<"*";
            }
            cout<< endl;
    }
    
}
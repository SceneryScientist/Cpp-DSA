#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=n; i >= 1; i--){
        for (int j=0; j < i; j++){
            cout << char(j+int('A'))<<" ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin>>n;
    print(n);
}
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=0; i < n; i++){
        for (int j=0; j <= i; j++){
            cout << char(j+(n-i-1)+int('A'))<<" ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print(n);
}
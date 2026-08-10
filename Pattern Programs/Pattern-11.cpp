#include <bits/stdc++.h>
using namespace std;

void print(int n){
    for (int i=1; i <= n; i++){
        int t;
        if (i%2==0) t=0;
        else t=1;
        for (int j=1; j <= i;j++){
            cout << t <<" ";
            t=1-t;
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    print(n);
}
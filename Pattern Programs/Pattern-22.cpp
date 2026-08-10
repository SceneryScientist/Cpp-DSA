#include <bits/stdc++.h>
using namespace std;

void print(int n){
    
    for (int i=0; i < 2*n-1; i++){
        int num=n;
        for (int j=0; j < 2*n-1; j++){
            int top = i;
            int bottom = (2 * n - 2) - i;
            int left = j;
            int right = (2 * n - 2) - j;
         z   
            int min_dist = min({top, bottom, left, right});
            cout << (n - min_dist) << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    
    cin>>n;    
    print(n);
}
#include <bits/stdc++.h>

using namespace std;

int saveThePrisoner(int n, int m, int k){
    int temp = 0;
    int t=n-k+1;
    if ( m > t){
     m = m - t;
     temp = m % n;
       if(temp==0) temp=n;
    }
    else
        temp = m + k - 1;
    return temp;
}

int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int m;
        int k;
        cin >> n >> m >> k;
        int result = saveThePrisoner(n, m, k);
       cout << result << endl;
    }
    return 0;
}

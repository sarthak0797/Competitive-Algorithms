#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    vector<int> b(n);
    int t=0;
    k=k%n;
    for(int i = n-k;i < n; i++){
         b[t] = a[i];
        t++;
    }
    for(int i = 0;i < n-k;i++){
        b[t] = a[i];
        t++;
    }
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        cout << b[m] << endl;
    }
    return 0;
}

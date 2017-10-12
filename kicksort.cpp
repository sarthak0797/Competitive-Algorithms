#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long test;
    cin >> test;
    long  long k = 1;
    while(test--){
    long long int n,temp;
    cin >> n;
    vector <int> a;
    for(int i = 0;i < n; i++)
    {
        cin >> temp;
        a.push_back(temp);
    }
    long long pi;
    bool fla = false;
    cout << "Case #" << k << ": ";
    while(a.size() > 1)
    {
        
        pi = a[floor((a.size()-1)/2)];
        long long sm = INT_MAX , l = -1;
        for(int i = 0; i < a.size();i++){
            if(a[i] < sm) sm = a[i];
            if(a[i] > l) l = a[i];
        }
        if(pi != sm && pi != l){
            cout << "NO" << "\n";
            fla = true;
            break;
        }
        a.erase(std::remove(a.begin(), a.end(), pi), a.end());
    }
    if(!fla) cout << "YES"<< "\n" ;
    k++;
        
    }
    return 0;
}
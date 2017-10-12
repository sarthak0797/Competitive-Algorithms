#include <bits/stdc++.h>

using namespace std;

int buyMaximumProducts(int n, int k, vector<pair <int,int> > a) {
    long long int tp = 0;
    for(int i = 0; i < n; i++)
    {
        if((k >= (i+1) * a[i].second)){
            k = k - (a[i].first * a[i].second);
            tp = tp + a[i].first;
        }
        else
        {
            tp += k / a[i].second;
        }
    }
    return tp;
}
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
    int n;
    cin >> n;
    long long int k1;
    vector<pair <int,int> > arr;
    vector<int> vect(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> vect[arr_i];
    }
    for(int i = 0; i < n; i++)
    {
        arr.push_back(make_pair((i+1),vect[i]));
    }
    sort(arr.begin(), arr.end(), sortbysec);
    long long int k;
    cin >> k;
    int result = buyMaximumProducts(n, k, arr);
    cout << result << endl;
    return 0;
}

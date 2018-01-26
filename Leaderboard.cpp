#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> scores(n);
    map <int,int> mapp;
    for(int scores_i = 0; scores_i < n; scores_i++){
       cin >> scores[scores_i];
    }
    int k = 1;
    for(int i = 0; i < n; i++)
    {
        if(!mapp[scores[i]])
        {
            mapp[scores[i]] = k;
            k++;
        }
    }
    int m,temp;
    cin >> m;
    auto itr = mapp.begin();
    for(int i = 0; i < m; i++)
    {
        cin >> temp;
        if(itr != mapp.end())
        {
            if(temp == itr->first)
            {
                cout << itr->second << "\n";
            }
            else
            {
                while(temp > itr->first)
                {
                    itr++;
                    if(itr == mapp.end()) break;
                }
                if(temp == itr->first ) cout << itr->second << "\n";
                else if(itr != mapp.end() )cout << (itr->second)+1 << "\n";
                else cout << 1 << "\n";
            }
        }
        else cout << "1\n";
    }
    return 0;
}

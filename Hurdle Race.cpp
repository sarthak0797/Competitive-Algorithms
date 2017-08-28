#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> height(n);
    for(int height_i = 0; height_i < n; height_i++){
       cin >> height[height_i];
    }
    // your code goes here
    int lg=0;
    for(int i = 0;i < n;i++){
        if(lg < height[i])
            lg = height[i];
    }
    int flag;
    flag=lg-k;
    if(flag<0) flag=0;
    cout<<flag;
    return 0;
}

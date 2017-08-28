#include <bits/stdc++.h>
using namespace std;


int main(){
    string s,s1;
    cin >> s;
    int temp=0;
    for(int i = 0; i < s.size();i+=3){
        s1[i]='S';
        s1[i+1]='O';
        s1[i+2]='S';
    }
    for(int i = 0; i < s.size();i++){
      if(s[i]!=s1[i]) temp++;  
    }
    cout << temp ;
    return 0;
}

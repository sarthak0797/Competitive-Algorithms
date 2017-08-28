#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string str;
    int i,temp=1;
    getline(cin,str);
    int j=65;
    for(i=97;i<=121;i++){
        for(int k=0;k<str.size();k++){
            if(i==str[k]||j==str[k]){
                temp++;
                break;
             }
        }
        j++;
    }
    if(temp>=26)
        cout<<"pangram";
    else cout<<"not pangram";
    return 0;
}

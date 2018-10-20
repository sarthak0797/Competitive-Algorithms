#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reverse(int n)
    {
    int rev = 0;
    while(n!=0)
        {
        rev = rev * 10;
        rev = (n % 10) + rev;
        n = n /10;
    }
    return rev;
}
int main() {
    int i,j,k,counter=0;
    cin >> i >> j >> k;
    for(int a = i;a <= j; a++)
        {
        int b = reverse(a);
        int diff = abs(a - b);
        if(diff % k == 0)
            counter++;
    }
    cout << counter;

    return 0;
}


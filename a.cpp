#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n;  cin>> n;
    vector<string> a(n), b(n);
    for( string & i : a)    cin >> i;
    cin >> n;
    for( string &i : b)     cin >> i;
    
    for( int i = 0; i < n; ++i){
        if( a[i].size() != b[i].size()){
            cout << -1 << '\n';
            continue;
        }
        vector<int> fa(26), fb(26);
        for( char ch : a[i]) fa[ ch - 'a'] += 1;
        for( char ch : b[i] )   fb[ch - 'a'] += 1;
        
        int diff = 0;
        for( int i = 0; i < 26; ++i)
            diff += abs( fa[i] - fb[i]);
        diff = diff/2;
        cout << diff << '\n';
    }
 return 0;

  
    
}

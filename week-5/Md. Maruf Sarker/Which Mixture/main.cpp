// Written by: Md. Maruf Sarker
// Platform: Codechef
// Problem: https://www.codechef.com/problems/MIXTURE
// Language: cpp / go / c / python
// Date: 2022-12-03
// Difficulty Rating: 841

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define pi 3.141592653589793238462
#define mod 1000000007
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sz(x) (int)x.size()

int read(){static int x; cin >> x; return x;}
ll readll(){static ll x; cin >> x; return x;}
double readd(){static double x; cin >> x; return x;}
ld readld(){static ld x; cin >> x; return x;}
string reads(){static string x; cin >> x; return x;}
char readc(){static char x; cin >> x; return x;}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);  cout.tie(NULL);  cout.precision(2);

    int t;
    cin >> t;
    
    while(t--) {
        int a, b;
        cin >> a >> b;

        if(a > 0 and b > 0) cout << "Solution" << endl;
        else if(b == 0) cout << "Solid" << endl;
        else cout << "Liquid" << endl;
    }
    return 0;
}
// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
#define sz(x) (x).size()
#define lli long long int
#define FIXED(x) cout << fixed << setprecision(x)

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i: a) cin >> i;
	int sum = -1, mid = 0;
	for(int i = 1; i < n - 1; ++i){
		if(a[i] + a[i - 1] + a[i + 1] > sum){
			sum = a[i] + a[i - 1] + a[i + 1];
			mid = i + 1;
		}
	}
	cout << sum << ' ' << mid << ln; 
	return 0;
}

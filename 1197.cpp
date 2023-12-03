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
	
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int i = s[0] - 97 + 1;
		int j = s[1] - 48;
		//cout << i << ' ' << j << ln;
		int ans = 0;
		if(j - 2 > 0){
			if(i - 1 > 0) ++ans;
			if(i + 1 <= 8) ++ans;
		}
		if(j + 2 <= 8){
			if(i - 1 > 0) ++ans;
			if(i + 1 <= 8) ++ans;
		}
		if(i - 2 > 0){
			if(j - 1 > 0) ++ans;
			if(j + 1 <= 8) ++ans;
		}
		if(i + 2 <= 8){
			if(j - 1 > 0) ++ans;
			if(j + 1 <= 8) ++ans;
		}
		cout << ans << ln;
	}	
	return 0;
}

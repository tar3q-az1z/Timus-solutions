// Author : Mars_Coder


#define _USE_MATH_DEFINES
#include<bits/stdc++.h>
using namespace std;
#define PI    3.141592653589793238462643383279502884L
#define ln "\n" // no flush, oppos of endl
#define _flush endl
#define stop_sync ios::sync_with_stdio(false) // not to use c-stye io
#define untie_ios cin.tie(nullptr) // no flush
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
	int cnt = 0;
	while(n--){
		string s;
		cin >> s;
		int sz = s.size();
		if(sz > 4){
			if(s[sz - 4] == '+' && s[sz - 3] == 'o' && s[sz - 2] == 'n' && s[sz - 1] == 'e') cnt += 2;
			else ++cnt;
		}else ++cnt;
	}
	cnt += 2;
	if(cnt == 13) cout << 1400 << ln;
	else cout << cnt * 100 << ln;
	return 0;
}

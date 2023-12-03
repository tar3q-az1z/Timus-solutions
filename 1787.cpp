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
	
	int n, k;
	cin >> k >> n;
	int ai, remain = 0;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(ai > k){
			remain += (ai - k);
		}else{
			if(remain == 0){ /* do nothing */}
			else{
				if((remain + ai) >= k) remain = (remain + ai) - k;
				else remain = 0;
			}
		}
	}
	cout << remain << ln;
	return 0;
}
// tricky problem
// To solve WA at test 14, try this below case
// 4 3
// 7 0 4
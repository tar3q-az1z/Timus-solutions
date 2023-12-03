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

bool ls(vector<int> arr, int tg){
	for(int i = 0; i < sz(arr); ++i){
		if(arr[i] == tg) return true;
	}
	return false;
}

int main(void){
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif
	
	int n, ai;
	cin >> n;
	vector<int> a1(n);
	for(int i = 0; i < n; ++i){
		cin >> a1[i];
	}
	cin >> n;
	vector<int> a2(n);
	//cout << sz(a2) << ln;
	for(int i = 0; i < n; ++i){
		cin >> a2[i];
	}
	int ans = 0;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> ai;
		if(ls(a1, ai) && ls(a2, ai)) ++ans;
	}
	cout << ans << ln;
	return 0;
}

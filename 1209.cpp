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

vector<lli> index;
void reRun(){
	lli inc = 0;
	lli mx = 1e10; // 2,147,483,648
	for(lli i = 1; i + inc <= mx;){
		index.push_back(i + inc);
		i = i + inc;
		++inc;
	}
	return;
}

bool isOne(lli tg){
	lli low = 0, high = index.size() - 1, mid;
	while(low <= high){
		mid = low + (high - low) / 2;
		if(tg == index[mid]) return true;
		if(tg < index[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return false;
}

int main(void){
	
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
		freopen("error.txt", "w", stderr);
	#endif

	reRun();
	lli N, ai;
	cin >> N;
	while(N--){
		cin >> ai;
		if(isOne(ai)) cout << "1 ";
		else cout << "0 ";
	}
	cout << ln;
	return 0;
}

// 1101001000
// 1 
// 1 + 1 = 2
// 2 + 2 = 4
// 4 + 3 = 7
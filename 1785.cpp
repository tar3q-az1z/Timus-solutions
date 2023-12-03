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
	if(n <= 4) cout << "few" << ln;
	else if(n <= 9) cout << "several\n";
	else if(n <= 19) cout << "pack\n";
	else if(n <= 49) cout << "lots\n";
	else if(n <= 99) cout << "horde\n";
	else if(n <= 249) cout << "throng\n";
	else if(n <= 499) cout << "swarm\n";
	else if(n <= 999) cout << "zounds\n";
	else cout << "legion" << ln;
	return 0; 
}

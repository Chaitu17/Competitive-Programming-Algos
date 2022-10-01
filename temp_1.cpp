#include<bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define pb push_back
#define FOR(i,t) for(int i=0; i<t; ++i)
#define NL cout << "\n"

vi getArray(int n) {
	vi v;
	int a;
	for(int i=0; i<n; ++i) {
		cin >> a;
		v.pb(a);
	}
	return v;
}

vll getllArray(int n) {
	vll v;
	ll a;
	for(int i=0; i<n; ++i) {
		cin >> a;
		v.pb(a);
	}
	return v;
}

void printArray(vi v) {
	for(int i=0; i<v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

void printllArray(vll v) {
	for(int i=0; i<v.size(); ++i) {
		cout << v[i] << " ";
	}
	cout << "\n";
}

int main() {
	fast_io;
	int t;
	cin >> t;
	for(int i=0; i<t; ++i) {
		int n;
		cin >> n;
		unordered_map<string, int> a;
		unordered_map<string, int> b;
		unordered_map<string, int> c;
		string arr[3][n];
		for(int j=0; j<3; ++j) {
			for(int k=0; k<n; ++k) {
				cin >> arr[j][k];
				if(j==0) {
					a[arr[j][k]] = 1;
				}
				else if(j==1) {
					b[arr[j][k]] = 1;

				}
				else {
					c[arr[j][k]] = 1;
				}
			}
		}
		int ap = 0;
		int bp = 0;
		int cp = 0;
		for(int i=0; i<n; ++i) {
			if(b[arr[0][i]]!=1 && c[arr[0][i]]!=1) ap += 3;
			else if(b[arr[0][i]]==1 && c[arr[0][i]]!=1) ap += 1;
			else if(b[arr[0][i]]!=1 && c[arr[0][i]]==1) ap += 1;
		}
		for(int i=0; i<n; ++i) {
			if(a[arr[1][i]]!=1 && c[arr[1][i]]!=1) bp += 3;
			else if(a[arr[1][i]]==1 && c[arr[1][i]]!=1) bp += 1;
			else if(a[arr[1][i]]!=1 && c[arr[1][i]]==1) bp += 1;
		}
		for(int i=0; i<n; ++i) {
			if(a[arr[2][i]]!=1 && b[arr[2][i]]!=1) cp += 3;
			else if(a[arr[2][i]]==1 && b[arr[2][i]]!=1) cp += 1;
			else if(a[arr[2][i]]!=1 && b[arr[2][i]]==1) cp += 1;
		}
		cout << ap << " " << bp << " " << cp << "\n";
	}
	return 0;
}






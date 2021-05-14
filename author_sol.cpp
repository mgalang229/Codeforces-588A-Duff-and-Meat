#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	// set 'money' to 0
	int money = 0;
	// set 'cost' to maximum value of integer
	int cost = INT_MAX;
	for (int i = 0; i < n; i++) {
		int a, p;
		cin >> a >> p;
		// store the minimum value between 'cost' and 'p'
		// to make sure that we get the lowest price, and
		// once we get it, we will use that price of that day
		// to buy all the meat that we can since it was mentioned
		// in the problem statement that "he can keep the meat he
		// has for the future"
		cost = min(cost, p);
		// add the product of 'cost' and 'a' to 'money'
		money += (cost * a);
	}
	cout << money << '\n';
	return 0;
}

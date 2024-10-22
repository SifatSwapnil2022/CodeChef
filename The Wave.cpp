#include <bits/stdc++.h>
using namespace std;

int main() {


	int n, q;
	cin >> n >> q;
	vector<int>roots(n);
	for (int i = 0; i < n; i++) {
		cin >> roots[i];
	}
	sort(roots.begin(), roots.end());

	while (q--) {
		int x;
		cin >> x;

		int low = lower_bound(roots.begin(), roots.end(), x) - roots.begin();

		if (low != n and roots[low] == x) {
			cout << "0" << endl;
			continue;
		}

		int noOfElementGreaterThanX = n - low;
		if (noOfElementGreaterThanX % 2 == 0) {
			cout << "POSITIVE" << endl;
			continue;
		}

		cout << "NEGATIVE" << endl;
	}




	return 0;


}

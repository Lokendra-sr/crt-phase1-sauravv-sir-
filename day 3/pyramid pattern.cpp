
#include <iostream>
using namespace std;

int main() {
	int n;
	if (!(cin >> n)) return 0;
	for (int i = 1; i <= n; ++i) {
		for (int s = 0; s < n - i; ++s) cout << ' ';
		for (int k = 0; k < 2 * i - 1; ++k) cout << '*';
		cout << '\n';
	}
	return 0;
}

 
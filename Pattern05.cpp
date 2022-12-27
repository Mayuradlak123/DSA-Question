
#include <bits/stdc++.h>
using namespace std;

void pattern(int n)
{
	for (int i = 1; i <= n; i++) {
		int k = 'A';
		int m = 1;
		for (int j = 1; j <= (2 * n); j++) {
			if (j >= n + 1 - i && (j <= n + i)) {
				if (j <= n) {
					cout << char(k);
					k++;
				}
				else {
					cout << m;
					m++;
				}
			}
			else
				cout << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n = 4;

	pattern(n);

	return 0;
}

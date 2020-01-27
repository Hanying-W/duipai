#include "iostream"

#include "cstring"

using namespace std;

char a[1005], b[1005], c[1005];

int size_a, size_b, size_c = 0;

int t;

int sum() {

	size_a = strlen(a) - 1;

	size_b = strlen(b) - 1;

	int cnt = 0;

	int k = 0;

	while (size_a>=0 && size_b>=0) {

		c[cnt] = a[size_a] - '0' + b[size_b] - '0' + k;

		if (c[cnt] > 9) {

			k = c[cnt] / 10;

			c[cnt] %= 10;

		}

		else

			k = 0;

		cnt++;

		size_a--;

		size_b--;

	}

	while (size_a>=0) {

		c[cnt] = a[size_a--] - '0' + k;

		if (c[cnt] > 9) {

			k = c[cnt] / 10;

			c[cnt] %= 10;

		}

		else

			k = 0;

		cnt++;

	}

	while (size_b>=0) {

		c[cnt] = b[size_b--] - '0' + k;

		if (c[cnt] > 9) {

			k = c[cnt] / 10;

			c[cnt] %= 10;

		}

		else

			k = 0;

		cnt++;

	}

	if (k)

		c[cnt++] = k;

	return cnt;

}

int main() {

	cin >> t;

	for (int x = 1; x <= t; x++) {

		cin >> a >> b;

		size_c = sum();

		cout << "Case " << x << ":" << endl;

		cout << a << " + " << b << " = ";

		for (int y = size_c - 1; y >= 0; y--)

			printf("%d", c[y]);

		if (x != t)

			cout << endl << endl;

	}

	return 0;

}
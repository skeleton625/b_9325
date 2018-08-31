#include <cstdio>

int t, s, c, q, p, m;
int main() {
	scanf_s("%d", &t);
	while (t--) {
		scanf_s("%d\n%d", &s, &c);
		m = s;
		for (int i = 0; i < c; i++) {
			scanf_s("%d %d", &q, &p);
			m += q * p;
		}
		printf("%d\n", m);
	}
}
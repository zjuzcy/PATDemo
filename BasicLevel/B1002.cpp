#include <stdio.h>
int main() {
	char a[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };
	char b[105];
	int i = 0,n=0;
	int m[100],f=0;
	scanf("%s", &b);
	while (b[i] != '\0') {
		n += b[i] - '0';
		i++;
	}
	if (n == 0) printf("ling");
	else{
		while (n != 0) {
			m[f] = n % 10;
			n = n / 10;
			f++;
		}
		for (i = f - 1; i >= 0; i--) {
			printf("%s", a[m[i]]);
			if (i != 0) printf(" ");
		}
	}
	return 0;
}
#include <stdio.h>
int main() {
	int n,num=0;
	scanf("%d",&n);
	while (true){
		if (n == 1) break;
		if (n % 2 == 0) {
			num++;
			n = n / 2;
		}else {
			num++;
			n = (3 * n + 1) / 2;
		}
	}
	printf("%d", num);
	return 0;
}
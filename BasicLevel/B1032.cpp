#include <stdio.h>
int main() {
	int n, num,maxs=-1,i,x,y;
	int school[100005] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d%d", &x, &y);
		school[x] += y;
		if (school[x] > maxs) {
			maxs = school[x];
			num = x;
		}
	
	}
	printf("%d %d", num,maxs);
}
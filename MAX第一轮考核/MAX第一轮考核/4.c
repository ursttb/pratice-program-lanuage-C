#include<stdio.h>
double g, j, ga;
int ans;
int main() {
	scanf("%lf", &g); scanf("%lf", &j);
	ga = g; ans = 1;
	while (ga > j) {
		ga += g * 0.1;
		j += j * 0.05;
		ans++;
	}
	printf("%d %lf", ans, j + ga);
}
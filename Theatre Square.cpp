#include <bits/stdc++.h> 
using namespace std;

int main(){
	
	long m,n ,a; scanf("%d %d %d",&m, &n, &a); 
	printf("%d\n", ((m+a-1)/a)*((n+a-1)/a)) ;

	return 0;
}

#include <bits/stdc++.h> 
using namespace std;

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	
	int n; scanf("%d", &n); 
	for (int i = 0; i < n; ++i)
	{
		char s[105]; scanf("%s", &s); 

		if (strlen(s) > 10){
				printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]); 
		}
		else{
			printf("%s\n",s );
		}
	}
	return 0;
}






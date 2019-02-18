#include <bits/stdc++.h> 
using namespace std;

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	
	string vowels = "aeiouy"; 
	char s[105]; scanf("%s",&s); 
	for (int i = 0; i < strlen(s); ++i)
	{
		char c = tolower(s[i]); 
		if(vowels.find(c) == string::npos){
			printf(".%c",c );
		}

	}
	printf("\n");
	return 0;
}






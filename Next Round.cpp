#include <bits/stdc++.h> 
using namespace std;

int main(){

	freopen("input.txt", "r",stdin);
	freopen("output.txt", "w",stdout);
	
	int n,k; scanf("%d %d",&n, &k); 
	int arr[n]; 
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]); 
	}
	//get bar; 
	int threshold = arr[k-1] > 0 ? arr[k-1]:1; 
	int count = 0; 
	for (int i = 0; i < n; ++i)
	{
		if(arr[i] >= threshold) count++; 
	}
	printf("%d\n",count );
	return 0;
}






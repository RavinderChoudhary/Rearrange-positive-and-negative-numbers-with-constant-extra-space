#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr = {12, 11, -13, -5, 6, -7, 5, -3, -6};
	int n = arr.size();
	int mn = *min_element(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	  arr[i] += (-mn);
	int mx = *max_element(arr.begin(),arr.end());
	int newMax = mx + 1;
	int i = 0;
	int j = 0;
	while(i < n){
	    if((arr[i]%newMax) <= (-mn)){
	      arr[j] = (arr[i]%newMax)*newMax + arr[j]%newMax;
	      j++;
	    }
	    i++;
	}
	i = 0;
	while(i < n){
	    if((arr[i]%newMax) > (-mn)){
	      arr[j] = (arr[i]%newMax)*newMax + arr[j]%newMax;
	      j++;
	    }
	    i++;
	}
	for(int i=0;i<n;i++)
	  cout<<(arr[i]/newMax)+mn<<" ";
	return 0;
}

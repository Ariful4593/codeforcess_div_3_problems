#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <int> arr;
    int n,k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    int ans;

    if(k == 0){
        ans = arr[0] - 1;
    }else{
        ans = arr[k-1];
    }


    int counter = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= ans){
            counter++;
        }
    }

    if (counter != k || !(1 <= ans && ans <= 1e+9)) {
		puts("-1");
		return 0;
	}
    cout << ans;
}

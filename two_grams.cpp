#include<iostream>
#include<vector>
#include <ctype.h>

using namespace std;

int main()
{
    vector <char> arr;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        char a;
        cin >> a;
        arr.push_back(toupper(a));
    }

    int res = 0;
    string ans;
    for(int i = 0; i != arr.size(); i++){
        int current_value = 0;
        for(int j = 0; j != arr.size(); j++){
            if(arr[j] == arr[i] && arr[j+1] == arr[i+1]){
                current_value++;
            }
        }

        if(res < current_value){
            res = current_value;
            ans = string(1, arr[i]) + string(1, arr[i + 1]);
        }
    }
    cout << ans << endl;
}

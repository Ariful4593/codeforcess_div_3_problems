#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector <long long> package;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        package.push_back(a);
    }
    sort(package.begin(), package.end());

    int counter = 0;
    for(int i = 0; i < n; i++){
        int number = 1;

        while(i < n-1 && package[i] == package[i+1]){
            i++;
            number++;
        }

        if(number > counter){
            counter = number;
        }
    }
    cout << counter;
}

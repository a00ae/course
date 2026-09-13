

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int popo(vector<vector<int> > arr) {
    int n = arr.size();

    int primary_sum = 0;
    int secondary_sum = 0;

    for (int i = 0; i < n; i++) {

        primary_sum += arr[i][i];


        secondary_sum += arr[i][n - 1 - i];

    }


    return abs(primary_sum - secondary_sum);

}

int main()
{
    vector<vector <int>> vArr = { {1,2,3}, {4, 5, 6}, {7, 8, 9} };


    cout << vArr.size();

    int arr = popo(vArr);

    cout << "Sum: " << arr;
    
}


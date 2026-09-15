#include <iostream>
#include <vector>
using namespace std;

void subarraySum(vector<int> &A, int T) {
    int S = 0, E = 0, sum = 0;
    while (S < A.size()) {
        // keep expanding E as long as the new sum won't exceed T
        while (E < A.size() && sum + A[E] <= T) {
            sum += A[E];
            ++E;
        }
        if (sum == T) {
            cout << S << " " << E - 1 << "\n";
            return;
        }
        sum -= A[S]; // remove the front element
        ++S; // move S one step forward
    }
    cout << -1 << "\n"; // no solution
}

int main() {
    int arr[] = {2, 3, 5, 7, 8, 10, 11, 16};
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int target = 17;
    while (left <= right) {
        int sum = arr[left] + arr[right];

        if (sum < target)
            left++;
        else if (sum > target)
            right--;
        else {
            cout << arr[left] << " " << arr[right];
            break;
        }
    }
}

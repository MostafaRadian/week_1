// #include <iostream>
//
// using namespace std;
//
// int fib(int n) {
//     if (n <= 1)
//         return n;
//     else
//         return fib(n - 1) + fib(n - 2);
// }
//
// bool search(int a[], int lo, int hi, int Target) {
//     if (lo > hi)
//         return false;
//     int mid = lo + (hi - lo) / 2;
//     if (a[mid] == Target)
//         return true;
//     else if (a[mid] > Target)
//         return search(a, lo, mid - 1, Target);
//     else if (a[mid] < Target)
//         return search(a, mid + 1, hi, Target);
// }
//
// int main() {
// }

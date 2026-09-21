// #include <iostream>
// #include <vector>
// #include<list>
// using namespace std;
//
//
// bool isEven(int n) {
//     return (n%2 !=0) ;
// }
//
// int main() {
//     list<string> playlist;
//     list<int> numberList;
//     list<int> numberList2;
//
//     numberList.push_back(1);
//     numberList.push_back(5);
//     numberList.push_back(0);
//     numberList.push_back(10);
//     numberList.push_back(6);
//     numberList.push_back(7);
//     numberList.push_back(2);
//
//     numberList2.push_back(11);
//     numberList2.push_back(19);
//     numberList2.push_back(20);
//     numberList2.push_back(14);
//     numberList2.push_back(16);
//     numberList.splice(numberList.end(),numberList2);
//     auto newList = numberList.unique();
//     //numberList.merge(numberList2);
//
//     playlist.push_back("Hello");
//     playlist.push_back("World");
//     playlist.push_back("Goodbye");
//     playlist.push_back("world");
//     playlist.push_back("screw");
//     playlist.push_back("you");
//
//     numberList.remove_if(isEven);
//
//
//     auto it = playlist.begin();
//     it++;
//
//     playlist.insert(it,2,"hi 1");
//
//     for (string i: playlist) {
//         cout << i << endl;
//     }
//
//     playlist.remove("Goodbye");
//
//
//     for (auto it = playlist.begin();it != playlist.end(); ++it)
//         if ( *it == "world")
//             playlist.erase(it);
//
//
//     int n, index, grade;
//     cout << "Enter the size of the vector:" << endl;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     cout << "Enter index: ";
//     cin >> index;
//     cout << "\nEnter new grade: ";
//     cin >> grade;
//
//     v.erase(v.begin() + index);
//     v.insert(v.begin() + index, grade);
//
//
//     return 0;
// }

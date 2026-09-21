#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
using namespace std;

int main() {
    // stack<int> numbers;
    // int input;
    // while (cin >> input && input != -1)
    //     numbers.push(input);
    //
    // while (!numbers.empty()) {
    //     cout << numbers.top() << " ";
    //     numbers.pop();
    // }
    //
    // stack<char> name;
    // string x = "Hossam is an idot";
    // // for (char i: x)
    // //     name.push(i);
    //
    // for (int i = 0; i < x.length(); i++)
    //     name.push(x[i]);
    //
    // while (!name.empty()) {
    //     cout << name.top();
    //     name.pop();
    // }


    // string par = "((())))";
    // stack<char> check;
    //
    // for (char i: par) {
    //     if (i == '(') {
    //         check.push(i);
    //     } else if (!check.empty() && check.top() == '(') {
    //         check.pop();
    //     } else {
    //         check.push(i);
    //     }
    // }
    //
    // cout << (check.empty() ? "valid" : "invalid");
    // set<int> tickets;
    // int x;
    // while (cin >> x && x != -1) {
    //     if (x >= 1 && x <= 10)
    //         tickets.insert(x);
    //
    // }
    //
    // for (int i = 1; i < 11; i++)
    //     if (tickets.find(i) == tickets.end())
    //         cout << i << " ";

    // set<string> hobbies1 = {"chess", "art", "programming"};
    // set<string> hobbies2 = {"sport", "art", "programming"};
    //
    // for (auto it = hobbies1.begin(); it != hobbies1.end(); ++it)
    //     if (hobbies2.find(*it) != hobbies2.end())
    //         cout << *it << " ";
    vector<char> players = {'A', 'B', 'C', 'D', 'E'};

    while (!players.empty()) {
        int count = 0;
    }

    return 0;
}

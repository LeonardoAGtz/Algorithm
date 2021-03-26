#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> cp;

    for (int i = 0; i < 5; ++i) {
        int a;
        cin >> a;
        cp.push(a);
    }

    while (!cp.empty()) {
        cout << cp.top() << endl;
        cp.pop();
    }

    return 0;
}

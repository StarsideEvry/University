#include <iostream>
#include <string>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    cout << "FIFO order:\n";

    queue<string> q; // queue
    q.push("Tom");
    q.push("Dick");
    q.push("Harry");

    stack<string> s; // stack
    while (q.size() > 0)
    {
        string name = q.front();
        q.pop();
        cout << name << "\n";
        s.push(name);
    }

    cout << "LIFO order:\n";
    while (s.size() > 0)
    {
        cout << s.top() << "\n";
        s.pop();
    }

    return 0;
}
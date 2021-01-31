#include <iostream>

using namespace std;

int main()
{
    int num, prev;
    do {
        cin >> num;
        if (num != prev) cout << num << ' ';
        prev = num;
    } while (num >= 0);
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int new_num = 0;
        while(n != 0)
        {
            new_num = new_num * 10 + (n % 10);
            n /= 10;
        } cout << new_num << endl;
    }
	return 0;
}

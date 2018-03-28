#include <iostream>

using namespace std;

int zs(int i) { return i + 1; }

int main(int argc, char *argv[])
{
    int num;
    num = 1;
    cin >> num;
    cout << zs(num) << endl;
    cout << "num = " << num << endl;
    cout << "Hello world!" << endl;

    return 0;
}

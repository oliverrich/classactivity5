#include <iostream>
using namespace std;

int main() {
    //size of short and double data types
    cout << "Size of short: " << sizeof(short) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    //limit of short
    cout << "Short minimum value: " << numeric_limits<short>::min() << endl;
    cout << "Short maximum value: " << numeric_limits<short>::max() << endl;

    //limit of double
    cout << "Double minimum value: " << numeric_limits<double>::min() << endl;
    cout << "Double maximum value: " << numeric_limits<double>::max() << endl;
    return 0;
}

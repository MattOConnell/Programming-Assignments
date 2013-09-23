#include <iostream>

using namespace std;

int main()
{
    int valuea = 1;
    int numbers;
    int i;
    int a = 0;
    int f;
    cout << "How many numbers? ";
    cin >> numbers;

    for(i=0;i<numbers;i++){
        cout << "Enter #" << valuea << ":";
        cin >> f;
        a = a + f;


        valuea++;
    }
    cout << "Sum: " << a;

    return 0;
}

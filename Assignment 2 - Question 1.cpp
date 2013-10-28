#include <iostream>

using namespace std;
int x;
int main()
{
    cout << "Number to check odd or even: ";
    cin >> x;

    if(x % 2 == 0){
        cout << "Number is even!";
    }else{
        cout << "Number is odd!";
    }
    return 0;
}

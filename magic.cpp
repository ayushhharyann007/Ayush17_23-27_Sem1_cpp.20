#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    int result= num%9 ? : 9;

    cout <<"Sum of digit: " << result <<endl;
    return 0;
}
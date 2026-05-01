#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive number: ";
    cin >> n;

    for(int i = 0; i <= n; i++) {
        sum += i;
        
        if(n<0){
            break;
        }
        
    }

    cout << "Sum from 0 to " << n << " is: " << sum;

    return 0;
}
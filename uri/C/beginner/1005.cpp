#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double A, B, x, y, media;

    cin >> A;
    cin >> B;

    x = A * 3.5;
    y = B * 7.5;

    media = (x + y) / 11.0;
    
    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    cout << "MEDIA = " << media << endl;

    return 0;
}

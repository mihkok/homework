#include <iostream>
#include <vector>


std::vector<int> Factorial(int n);
void PrintVector(std::vector<int>& vect); 


int main() {
    int n;
    std::cin >> n;
    std::vector<int> n_factorial = Factorial(n);
    PrintVector(n_factorial);
    return 0;
}


std::vector<int> Factorial(int n) {
    std::vector<int> digits;
    size_t k = 2;
    while (n != 0) {
        digits.push_back(n % k);
        n /= k;
        ++k;
    }
    return digits;
}


void PrintVector(std::vector<int>& vect) {
    for (int i = vect.size() - 1; i >= 0; --i) {
        std::cout << vect[i] << '.';
    }
    std::cout << std::endl;
}
#include <iostream>
#include <unordered_set>


int DigitSquaresSum (int n);
bool IsLucky (int n);


int main () {
    int n;
    std::cin >> n;
    if (IsLucky(n)) std::cout << "Счастливое\n";
    else std::cout << "Не счастливое\n";
    return 0;
}


int DigitSquaresSum (int n) {
    int dss = 0;
    while (n > 0) {
        dss += (n % 10) * (n % 10);
        n /= 10;
    }
    return dss;
}


bool IsLucky (int n) {
    std::unordered_set<int> nums;
    while (!nums.count(n))
    {
        if (n == 1) return true;
        nums.insert(n);
        n = DigitSquaresSum(n);
    }
    return false;
}
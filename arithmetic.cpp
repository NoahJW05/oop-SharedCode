#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> decimalToBinary(int num) {
    std::vector<int> binary;
    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }
    std::reverse(binary.begin(), binary.end());
    return binary;
}

int binaryToDecimal(const std::vector<int>& binary) {
    int num = 0;
    for (int bit : binary) {
        num = (num << 1) | bit;
    }
    return num;
}
std::vector<int> binaryAdd(const std::vector<int>& a, const std::vector<int>& b) {
    int carry = 0;
    std::vector<int> result;
    auto it1 = a.rbegin();
    auto it2 = b.rbegin();

    while (it1 != a.rend() || it2 != b.rend() || carry) {
        int sum = carry;
        if (it1 != a.rend()) {
            sum += *it1;
            ++it1;
        }
        if (it2 != b.rend()) {
            sum += *it2;
            ++it2;
        }
        result.push_back(sum % 2);
        carry = sum / 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

std::vector<int> binaryLeftShift(const std::vector<int>& binary, int shift) {
    std::vector<int> result = binary;
    for (int i = 0; i < shift; ++i) {
        result.push_back(0);
    }
    return result;
}
std::vector<int> binaryRightShift(const std::vector<int>& binary, int shift) {
    if (shift >= binary.size()) {
        return std::vector<int>{0};
    }
    return std::vector<int>(binary.begin(), binary.end() - shift);
}

int main() {
    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    auto binary1 = decimalToBinary(num1);
    auto binary2 = decimalToBinary(num2);

    std::cout << "Binary of " << num1 << " is: ";
    for (int bit : binary1) std::cout << bit;
    std::cout << std::endl;

    std::cout << "Binary of " << num2 << " is: ";
    for (int bit : binary2) std::cout << bit;
    std::cout << std::endl;

    auto sum = binaryAdd(binary1, binary2);
    std::cout << "Sum: ";
    for (int bit : sum) std::cout << bit;
    std::cout << std::endl;

    auto leftShift = binaryLeftShift(binary1, 2);
    std::cout << "Left Shift: ";
    for (int bit : leftShift) std::cout << bit;
    std::cout << std::endl;

    auto rightShift = binaryRightShift(binary1, 2);
    std::cout << "Right Shift: ";
    for (int bit : rightShift) std::cout << bit;
    std::cout << std::endl;

    return 0;
}
#include <iostream>
#include <vector>

#include <lib/lr1.h>
using namespace std;

int main() {
    std::vector<double> arr = {1.2, -2.5, 3.4, 4.5, -1.2, 6.7, 8.9};
    int result = countConsecutivePositivePairs(arr);
    std::cout << "Positive pairs count: " << result << std::endl;
    return 0;
}
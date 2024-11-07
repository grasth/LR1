#include "lr1.h"
using namespace std;

int countConsecutivePositivePairs(const std::vector<double>& array) {
    int count = 0;
    for (size_t i = 1; i < array.size(); ++i) {
        if (array[i] > 0 && array[i - 1] > 0) {
            count++;
        }
    }
    return count;
}

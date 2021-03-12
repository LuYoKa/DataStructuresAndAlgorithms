#include "k_array.h"

KArray::KArray() {

}

KArray::~KArray() {

}

void KArray::Test() {
    std::vector<int> array = {0, 1, 2, 3, 4, 5, 7, 9, 13};
    int idx = BinarySearch(array, 6);
    std::cout << "[OUTPUT]: BinarySearch: idx = " << idx << "  array[idx]=  " << array[idx] << std::endl;
}
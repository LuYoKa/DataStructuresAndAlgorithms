#ifndef __K_ARRAY_H
#define __K_ARRAY_H

#include <iostream>
#include <vector>

class KArray{
public:
    KArray();
    ~KArray();

    // 二分法(左闭右闭)
    int SearchInsert(std::vector<int> &array, int elem) {
        int n = array.size();
        int left = 0;
        int right = n - 1;
        int middle;
        while(left <= right) {
            middle = left + ((right - left) / 2);// (left + right) / 2;
            if(elem > array[middle]) {
                left = middle + 1;
            } else if(elem < array[middle]) {
                right = middle - 1; //!!!
            } else {
                return middle;
            }
            
        }
        return right + 1;
    }

    // 左闭右开
    int BinarySearch(std::vector<int> &array, int elem) {
        int n = array.size();
        int left = 0;
        int right = n;
        while(left < right) {
            int middle = left + (right - left) / 2;
            if(elem < array[middle]) {
                right = middle - 1;
            } else if (elem > array[middle]) {
                left = middle + 1;
            } else {
                return middle;
            }
        }

        // !!!
        return right;
    }

    void Test();
private:
};


#endif

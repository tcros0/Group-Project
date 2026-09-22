#pragma once
#include <string>
#include <vector>

using namespace std;

class stuff {
private:
    int nums;
    string name;

public:
    stuff();
    stuff(int num, string name);

    template <typename T>
    void sortBigtoSmall(vector<T>& array) {
        if (array.empty()) return;
        for (int i = 0; i < array.size(); i++) {
            for (int o = i + 1; o < array.size(); o++) {
                if (array[i] < array[o]) {
                    T temp = array[i];
                    array[i] = array[o];
                    array[o] = temp;
                }
            }
        }
    }
};
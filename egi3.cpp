#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}

void printArray(const std::vector<int>& data) {
    for (int i = 0; i < data.size(); ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> data = {5, 1, 4, 2, 8};

    std::cout << "Data sebelum sorting: ";
    printArray(data);

    bubbleSort(data);

    std::cout << "Data setelah sorting: ";
    printArray(data);

    return 0;
}


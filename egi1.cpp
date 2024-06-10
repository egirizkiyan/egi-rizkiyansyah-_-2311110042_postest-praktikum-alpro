#include <iostream>
#include <vector>

int main() {
    std::vector<int> data = {1, 2, 3, 4, 5, 5};

    int target = 5;

    std::vector<int> indices;

    for (int index = 0; index < data.size(); ++index) {
        if (data[index] == target) {
            indices.push_back(index);
        }
    }

    std::cout << "The number 5 is found at indices: ";
    for (int idx : indices) {
        std::cout << idx << " ";
    }

    return 0;
}

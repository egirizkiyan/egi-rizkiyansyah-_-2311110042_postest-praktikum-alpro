#include<iostream>
#include<vector>

void Array(std::vector<int>& data) {
    int n = data.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                std::swap(data[j], data[j + 1]);
            }
        }
    }
}
int main(){
    std::vector <int> data = {2,7,11,15};
    int target = 9;
    std::vector<int> indices;
    for (int index = 0; index < data.size(); ++index) {
        if (data[index] == target) {
            indices.push_back(index);        
        } 
     }
    std::cout << "The number 2 is found at indices: 0,1 ";
    for (int idx : indices) {
        std::cout << idx << " ";
    }
    return 0;
}

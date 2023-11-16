#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& denominations) {
    int n = denominations.size();
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (denominations[j] < denominations[minIndex]) {
                minIndex = j;
            }
        }
        
        std::swap(denominations[i], denominations[minIndex]);
    }
}

int main() {
    // Create a vector to store the denominations of coins and banknotes
    std::vector<int> denominations = {100, 20, 50, 10, 5};
    
    // Display the original list of denominations
    std::cout << "Original list of denominations:" << std::endl;
    for (const auto& denomination : denominations) {
        std::cout << denomination << std::endl;
    }
    
    // Sort the denominations using Selection Sort
    selectionSort(denominations);
    
    // Display the sorted list of denominations
    std::cout << "\nSorted list of denominations:" << std::endl;
    for (const auto& denomination : denominations) {
        std::cout << denomination << std::endl;
    }
    
    return 0;
}

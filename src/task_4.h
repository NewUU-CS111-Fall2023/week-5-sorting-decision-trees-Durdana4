#include <iostream>
#include <vector>

int countElementsMeetingCriteria(const std::vector<int>& arr) {
    int count = 0;
    int n = arr.size();

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            count++;
        }
    }

    return count;
}
int main() {
    std::vector<int> arr = {1, 2, 3, 2, 5, 1, 6, 2, 1};

    // Display the array
    std::cout << "Array: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Count the elements meeting the criteria
    int count = countElementsMeetingCriteria(arr);

    // Display the count
    std::cout << "Count of elements meeting the criteria: " << count << std::endl;

    return 0;
}

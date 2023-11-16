#include <iostream>
#include <vector>

void rearrangeSoldiers(std::vector<int>& soldiers) {
    int n = soldiers.size();
    int last = n % 2 == 0 ? n - 1 : n - 2;
    
    for (int i = 0; i < last; i += 2) {
        std::swap(soldiers[i], soldiers[i + 1]);
    }
}

int main() {
    std::vector<int> soldiers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Display the original lineup of soldiers
    std::cout << "Original lineup of soldiers: ";
    for (const auto& soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << std::endl;

    // Rearrange the soldiers as per the Lieutenant's command
    rearrangeSoldiers(soldiers);

    // Display the rearranged lineup of soldiers
    std::cout << "Rearranged lineup of soldiers: ";
    for (const auto& soldier : soldiers) {
        std::cout << soldier << " ";
    }
    std::cout << std::endl;

    return 0;
}

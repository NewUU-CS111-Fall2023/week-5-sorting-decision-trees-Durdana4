/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& titles) {
    int n = titles.size();
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (titles[j] > titles[j + 1]) {
                swap(titles[j], titles[j + 1]);
            }
        }
    }
}

int main() {
    vector<string> bookTitles = {"The Catcher in the Rye", "To Kill a Mockingbird", "1984", "Pride and Prejudice", "The Great Gatsby"};
    
    cout << "Original list of book titles:" << endl;
    for (const auto& title : bookTitles) {
        cout << title << endl;
    }
    
    bubbleSort(bookTitles);
    
    cout << "\nSorted list of book titles:" << endl;
    for (const auto& title : bookTitles) {
        cout << title << endl;
    }
    
    return 0;
}

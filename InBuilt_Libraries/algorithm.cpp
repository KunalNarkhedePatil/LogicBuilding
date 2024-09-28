#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Example vector of integers
    vector<int> numbers = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    
    // 1. sort
    sort(numbers.begin(), numbers.end());
    cout << "Sorted vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    // 2. find
    int target = 5;
    auto it = find(numbers.begin(), numbers.end(), target);
    if (it != numbers.end()) {
        cout << "Found " << target << " at index " << distance(numbers.begin(), it) << endl;
    } else {
        cout << target << " not found in the vector." << endl;
    }
    
    // 3. accumulate
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of elements: " << sum << endl;
    
    // 4. max_element
    auto maxIt = max_element(numbers.begin(), numbers.end());
    if (maxIt != numbers.end()) {
        cout << "Maximum element in the vector: " << *maxIt << endl;
    }
    
    // 5. min_element
    auto minIt = min_element(numbers.begin(), numbers.end());
    if (minIt != numbers.end()) {
        cout << "Minimum element in the vector: " << *minIt << endl;
    }
    
    // 6. count
    int count = count(numbers.begin(), numbers.end(), target);
    cout << "Number of occurrences of " << target << ": " << count << endl;
    
    // 7. reverse
    reverse(numbers.begin(), numbers.end());
    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    
    // 8. binary_search
    sort(numbers.begin(), numbers.end());
    bool found = binary_search(numbers.begin(), numbers.end(), target);
    cout << target << " " << (found ? "found" : "not found") << " in the sorted vector." << endl;
    
  
    return 0;
}

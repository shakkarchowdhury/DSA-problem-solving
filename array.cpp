#include <iostream>

int main() {
    int array[11], n, x; // Use size 11 to accommodate the new element

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if(n > 10) {
        std::cout << "Error: Max 10 elements allowed.\n";
        return 1;
    }

    std::cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        std::cin >> array[i];
    }

    std::cout << "Enter a value to insert at the beginning: ";
    std::cin >> x;

    // Shift elements to the right
    for(int i = n; i > 0; i--) {
        array[i] = array[i - 1];
    }

    // Insert at the beginning
    array[0] = x;
    n++;

    std::cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

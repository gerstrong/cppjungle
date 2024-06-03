#include <iostream>
#include <vector>

// Zu 1. Fragmentierung

int main() {
    // Creating a vector of vectors
    //std::vector<std::vector<int>> matrix;

    // Zu 2.
    std::vector<int> matrix;

    // Zu 3.
    // Adding elements to the matrix
    for (int i = 0; i < 3; ++i) {
        //std::vector<int> row;
        for (int j = 0; j < 4; ++j) {
            //row.push_back(i * 4 + j + 1);
            matrix.push_back(i * 4 + j + 1);
        }
        //matrix.push_back(row);
    }

    // Accessing and printing the elements
    int i=0;
    for (const auto& val : matrix)
    {
        if(i%4==0)
        {
            std::cout << std::endl;
        }
        i++;
        std::cout << val << ' ';
    }

    std::cout << std::endl;

    /*
    for (const auto& row : matrix) {
        for (int value : row) {
            std::cout << value << ' ';
        }
        std::cout << '\n';
    }
    */

    return 0;
}

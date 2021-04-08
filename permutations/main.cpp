#include <iostream>
#include <vector>

void permute(std::vector<int> A, int i, int n) {
    if (i < n) {
        for (int j = 0; j < n; j++) {
            A[i] = j + 1;
            permute(A, i + 1, n);
        }
   } else {
        for (int j = 0; j < n; j++) {
            std::cout << A[j];
        }
        std::cout << std::endl;
   }
}

void printVector(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    
    int n = 3;
    std::vector<int> vec (n, 0);
    permute(vec, 0, n);
    //std::vector<int> vec(3, 0);
    //printVector(A);
    return 0;
}
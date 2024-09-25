#ifndef HELPERS_HPP
#define HELPERS_HPP

#include <vector>

void print_matrix (const std::vector<std::vector<int>>& matrix) {
	for (const auto& row : matrix) {
		for (int val : row) {
			std::cout << val << "  ";
		}
		std::cout << '\n';
	}
}

void print (const std::vector<int>& vec) {
	for_each(vec.begin(), vec.end(), [](const int val){std::cout << val << ' ';});
	std::cout << '\n';
}

#endif // HELPERS_HPP
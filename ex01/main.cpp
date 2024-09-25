#include "header.h"

std::vector<int> rand_vec (std::size_t size = 6, int start = 0) {
	std::vector<int> res(size, 0);

	for (int i = start; size--; ++i) {
		res[i] = i;
	}

	std::random_device rd;
	std::mt19937 eng(rd());

	std::shuffle(res.begin(), res.end(), eng);

	return res;
}

int main () {
	// std::vector<int> nums = rand_vec(10);

	// print(nums);

	// Two_sum obj;
	// auto [i1, i2] = obj(nums, 17);
	// if (i1 == i2)
	// 	std::cout << "There is no such values\n";
	// else
	// 	std::cout << nums[i1] << " + " << nums[i2] << " = "  << nums[i1] + nums[i2] << std::endl;

	// std::vector<std::vector<int>> matrix = {
	// 	{1, 2, 3, 4},
	// 	{5, 6, 7, 8},
	// 	{9, 10, 11, 12},
	// 	{13, 14, 15, 16},
	// };

	// print_matrix(matrix);
	// std::cout << '\n';
	// Rotate r;
	// r(matrix);	
	// print_matrix(matrix);
}
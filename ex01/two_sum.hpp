#ifndef TWO_SUM_HPP
#define TWO_SUM_HPP

#include "header.h"

class Two_sum {
public:
	std::pair<int, int> operator () (const std::vector<int>& vec, int target) {
		std::unordered_map<int, int> um;

		for (int i = 0; i < vec.size(); ++i) {
			auto it = um.find(target - vec[i]);

			if (it != um.end()) return {i, it->second};

			um.emplace(vec[i], i);
		}

		return {0, 0};
	}
};

#endif // TWO_SUM_HPP
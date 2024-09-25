#ifndef ROTATE_HPP
#define ROTATE_HPP

class Rotate {
public:
	void operator() (std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        if (n == 1) return;
        
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (std::vector<int>& row : matrix) {
            reverse(row.begin(), row.end());
        }
    }
};

#endif // ROTATE_HPP
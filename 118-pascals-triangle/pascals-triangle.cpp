class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> triangle(numRows);

    for (int i = 0; i < numRows; ++i) {
        triangle[i].resize(i + 1);         // each row has i+1 elements
        triangle[i][0] = triangle[i][i] = 1; // first and last element is 1

        for (int j = 1; j < i; ++j) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    return triangle; 
    }
};
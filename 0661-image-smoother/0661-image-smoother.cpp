class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &image) {
        vector<vector<int>> smoother(image.size(), vector<int>(image[0].size()));

        for (int row = 0; row < smoother.size(); ++row)
            for (int column = 0; column < smoother[0].size(); ++column)
                smoother[row][column] = surroundingFloor(image, row, column);

        return smoother;
    }

private:
    int surroundingFloor(vector<vector<int>> &image, int row, int column) {
        int count = 0, sum = 0;

        for (int rowDifference = -1; rowDifference <= 1; ++rowDifference) {
            for (int columnDifference = -1; columnDifference <= 1; ++columnDifference) {
                int newRow = row + rowDifference, newColumn = column + columnDifference;

                if (newRow >= 0 && newRow < image.size() && newColumn >= 0 && newColumn < image[0].size()) {
                    sum += image[newRow][newColumn];
                    count++;
                }
            }
        }

        return (int) floor(sum * 1.00 / count);
    }
};
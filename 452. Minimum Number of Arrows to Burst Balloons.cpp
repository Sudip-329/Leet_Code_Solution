class Solution {
public:
    static bool compareSecondCoordinate(const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        std::sort(points.begin(), points.end(), compareSecondCoordinate);

        int arrows = 1;
        int prevEnd = points[0][1];

        // Count the number of non-overlapping intervals
        for (int i = 1; i < points.size(); ++i) {
            if (points[i][0] > prevEnd) {
                arrows++;
                prevEnd = points[i][1];
            }
        }

        return arrows;
    }
};

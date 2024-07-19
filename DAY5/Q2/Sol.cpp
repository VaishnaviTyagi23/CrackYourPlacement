pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
int floor = -1;    // Initialize floor to -1 if no valid floor is found
    int ceiling = -1;  // Initialize ceiling to -1 if no valid ceiling is found

    for (int num : a) {
        if (num <= x) {
            // Update floor if current number is less than or equal to x
            if (num > floor) {
                floor = num;
            }
        }
        if (num >= x) {
            // Update ceiling if current number is greater than or equal to x
            if (num < ceiling || ceiling == -1) {
                ceiling = num;
            }
        }
    }

    return {floor, ceiling};

}
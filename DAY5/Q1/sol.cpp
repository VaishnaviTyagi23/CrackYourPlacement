string canPermuteArrays(vector<int>& a, vector<int>& b, int k) {
    // Sort array a in ascending order
    sort(a.begin(), a.end());
    // Sort array b in descending order
    sort(b.begin(), b.end(), greater<int>());
    
    // Check if all corresponding pairs satisfy the condition
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] + b[i] < k) {
            return "No";
        }
    }
    return "Yes";
}

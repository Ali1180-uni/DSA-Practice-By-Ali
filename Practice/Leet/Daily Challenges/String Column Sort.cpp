class Solution {
	public:
		int minDeletionSize(vector<string>& strs) {
			int n = strs.size();
			int m = strs[0].size();
			int count = 0;
			vector<char> arr1(n);
			for (int i = 0; i < m; i++) {
				bool check = false;
				for (int k = 0; k < n - 1; k++) {
					if (strs[k][i] > strs[k + 1][i]) {
						check = true;
						break;
					}
				}
				if (check) {
					count++;
				}
			}
			return count;
		}
};

Description:  944. Delete Columns to Make Sorted


You are given an array of n strings strs, all of the same length.

The strings can be arranged such that there is one on each line, making a grid.

For example, strs = ["abc", "bce", "cae"] can be arranged as follows:
                    abc
                    bce
                    cae
You want to delete the columns that are not sorted lexicographically. In the above example (0-indexed), columns 0 ('a', 'b', 'c') and 2 ('c', 'e', 'e') are sorted, while column 1 ('b', 'c', 'a') is not, so you would delete column 1.

Return the number of columns that you will delete.
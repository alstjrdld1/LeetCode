#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		vector<char> db;

		int maxLength = 0;
		int startIdx = 0;

		for (int i = 0; i < s.size(); i++) {

			int findIdx = -1;
			for (int j = 0; j < db.size(); j++) {
				if (db[j] == s[i]) {
					findIdx = j;
					break;
				}
			}

			if (findIdx == -1) {
				db.push_back(s[i]);
			}
			else {
				int curLength = db.size();
				if (maxLength < curLength) {
					maxLength = curLength;
				}

				for (int j = 0; j <= findIdx; j++) {
					db.erase(db.begin());
				}

				db.push_back(s[i]);
			}

		}

		int curLength = db.size();
		if (maxLength < curLength) {
			maxLength = curLength;
		}

		return maxLength;
	}
};
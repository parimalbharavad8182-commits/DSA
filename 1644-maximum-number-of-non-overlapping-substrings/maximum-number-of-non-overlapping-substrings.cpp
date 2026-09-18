class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n = s.size();
        vector<int> first(26, n), last(26, -1);

        for (int i = 0; i < n; i++) {
            first[s[i] - 'a'] = min(first[s[i] - 'a'], i);
            last[s[i] - 'a'] = i;
        }

        vector<pair<int,int>> intervals;

        for (int c = 0; c < 26; c++) {
            if (last[c] == -1) continue;

            int l = first[c], r = last[c];
            bool ok = true;

            for (int i = l; i <= r; i++) {
                int x = s[i] - 'a';

                if (first[x] < l) {
                    ok = false;
                    break;
                }

                r = max(r, last[x]);
            }

            if (ok)
                intervals.push_back({l, r});
        }

        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        vector<string> ans;
        int end = -1;

        for (auto &[l, r] : intervals) {
            if (l > end) {
                ans.push_back(s.substr(l, r - l + 1));
                end = r;
            }
        }

        return ans;
    }
};
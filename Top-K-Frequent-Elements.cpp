class Solution {
public:
    struct compare {
        bool operator()(pair<int, int> a, pair<int, int> b) {
            return a.second > b.second;
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> ump;
        for (auto it : nums) {
            ump[it]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;
        for (auto it : ump) {
            pq.push({it.first, it.second});
            if(pq.size() > k) pq.pop();
        }

        vector<int> res;
        for (int i = 0; i < k; i++) {
            res.push_back(pq.top().first);
            pq.pop();
        }

        return res;
    }
};

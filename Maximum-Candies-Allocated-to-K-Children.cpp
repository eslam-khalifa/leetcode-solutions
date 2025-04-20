class Solution {
#define ll long long
public:
    int maximumCandies(vector<int>& candies, long long k) {
        sort(candies.begin(), candies.end());
        ll low = 1, high = *(--candies.end());
        ll mid = low + ((high - low) / 2);
        ll summ = 0;
        for(auto it : candies) summ += it;
        if(k > summ) return 0;
        ll sol = 0;
        while(low <= high){
            ll counter = 0;
            mid = low + ((high - low) / 2);
            for(ll i = 0; i < candies.size(); i++) counter += candies[i]/mid;
            cout << low << ' ' << mid << ' ' << high << ' ' << counter << '\n';
            if(counter > k || counter == k){
                sol = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return sol;
    }
};
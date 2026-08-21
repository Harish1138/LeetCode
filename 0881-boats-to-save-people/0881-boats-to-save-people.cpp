class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int left=0;
        int right=people.size()-1;
        int count=0;
        sort(people.begin(),people.end());
        while(left<=right){
            int sum=people[left]+people[right];
            if(sum<=limit){
                left++;
            }
            count++;
            right--;
            
        }
        return count;
    }
};
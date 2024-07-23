class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int,int>freqmap;
        vector<int>freqvec;
        for(auto i : nums){
            freqmap[i]++;
        }
        for(auto i : freqmap){
            for(int k=0;k<i.second;k++){
                freqvec.push_back(i.first);
            }
        }

        sort(freqvec.begin(),freqvec.end(),[&freqmap](int a,int b){
            if(freqmap[a]==freqmap[b])return a>b;
            return freqmap[a]<freqmap[b];
        });
        return freqvec;
    }
};
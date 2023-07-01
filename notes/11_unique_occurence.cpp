class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i = 0; i < arr.size(); i ++)
        {
            m[arr[i]]++;
        }
        set<int>s;
        for(auto x : m){
            s.insert(x.second);
        }
        if(m.size() == s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};
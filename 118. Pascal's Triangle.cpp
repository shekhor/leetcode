class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> results;
        vector<int> tmpAns;
        tmpAns.push_back(1);
        results.push_back(tmpAns);

        for(int cnt = 2; cnt <= numRows; cnt++){
            vector<int> tmp;
            tmp.push_back(1);

            for(int len = 0; len < tmpAns.size()-1; len++){
                tmp.push_back(tmpAns[len] + tmpAns[len+1]);
            }
            
            tmp.push_back(1);
            results.push_back(tmp);
            tmpAns = tmp;
        }
        return results;
    }
};

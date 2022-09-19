// little shorter: https://leetcode.com/problems/find-duplicate-file-in-system/discuss/104123/C%2B%2B-clean-solution-answers-to-follow-up
class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        map<string, vector<string> > m;
        for(int i=0; i<paths.size(); i++){
            string dir;
            int j;
            for(j=0; j<paths[i].size(); j++){
                while(paths[i][j]!=' ') {dir+=paths[i][j]; j++;} 
                break;
            }
            for(; j<paths[i].size(); j++){
                string file="/";
                string content;
                while(paths[i][j]!=' ' and paths[i][j]!='(') {file+=paths[i][j]; j++;}
                while(paths[i][j]!=' ' and paths[i][j]!=')') {content+=paths[i][j]; j++;}
                
                if(file!="/") {
                    m[content].push_back(dir + file); // file always contains '/'. we don't want to add "/" as a file name. This may happen when have just built dir and paths[i][j]==' '
                }
            }
        }
        vector<vector<string>> ans;
        for(auto x: m) {
            if(x.second.size()>1) {
                ans.push_back(x.second); // we are only looking for duplicates
            }
        }
        return ans;
    }
};

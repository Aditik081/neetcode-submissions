class Solution {
public:

    string encode(vector<string>& strs) {
        string res = "";
        for(auto &str:strs){
            for(auto &ch: str){
                res.push_back(ch);
            }
            res.push_back((char)0xffffff);
        }
        return res;
        

    }

    vector<string> decode(string s) {
        vector<string>res;
        string curr="";
        for(int i=0;i<s.length();i++){
            if(s[i]==(char)0xffffff){
             res.push_back(curr);
            
             curr="";
            }else{
                curr.push_back(s[i]);
            }

            
        }
        return res;

        

       

    }
};
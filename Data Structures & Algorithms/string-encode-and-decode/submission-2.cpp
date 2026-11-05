class Solution {
public:

    string encode(vector<string>& strs) {
        string e = "";
        for(string i:strs){
            e += to_string(i.size()) + '#' + i;
        }

        return e;
    }

    vector<string> decode(string s) {
        vector<string>d;
        
        int i = 0;
        string j = "";
        while(i < s.size()){
            while(s[i] != '#'){
                j += s[i];
                i++;
                continue;
            }
            i++;
            
            d.push_back(s.substr(i, stoi(j)));
            i += stoi(j);
            j = "";
        }

        return d;
    }
};

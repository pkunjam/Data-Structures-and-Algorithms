class Codec {
public:

    vector<int> strLen;

    // Encodes a list of strings to a single string.
    string encode(vector<string>& strs) {
        
        string res;

        for(string s : strs)
        {
            strLen.push_back(s.size());
            res += s;
        }

        for(int i = 1; i < strLen.size(); i++)
        {
            strLen[i] += strLen[i-1];
        }

        return res;
    }

    // Decodes a single string to a list of strings.
    vector<string> decode(string s) {
        
        vector<string> res;

        int currIdx = 0;
                
        for(int i = 0; i < strLen.size(); i++)
        {
            string str = "";

            for(int j = currIdx; j < strLen[i]; j++)
            {
                str += s[j];
                currIdx = j+1;
            }

            res.push_back(str);
        }

        return res;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.decode(codec.encode(strs));
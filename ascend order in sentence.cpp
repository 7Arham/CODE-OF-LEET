class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int>vec;
        for(int i=0;i<s.length();i++){
            if(isdigit(s[i])){
                int num=0;
                while(i<s.length() && isdigit(s[i])){
                    num=num*10 + (s[i]-'0');
                    i++;
                }
                vec.push_back(num);

            }
            
        }
        int i=1;
        while(i<vec.size()){
            if(vec[i-1]>=vec[i]){
                return false;
            }
            i++;
        }
    return true;}
};
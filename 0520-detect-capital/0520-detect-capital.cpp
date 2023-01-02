class Solution {
public:
    bool detectCapitalUse(string word) {
        // int count = 0;
        // for(int i=0;i<word.size()-1;i++)
        // {
        //     if(count>1&&islower(word[i+1]))
        //         return false;
        //     if(islower(word[i])){
        //         if(isupper(word[i+1]))
        //             return false;
        //     }
        //     else
        //         count++;
        // }
        // if(count>1&&islower(word[word.size()-1]))
        //         return false;
        // return true;
        for(int i=1;i<word.size();i++){
            if( (isupper(word[1]) != isupper(word[i]))  ||  (islower(word[0]) && isupper(word[i])) )
                return false;
        }
        return true;
    }
};
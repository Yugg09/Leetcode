class Solution {
public:

   bool isvowel(string &s , int i){
     if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
              return true;
            }

            return false;
   }
    int maxVowels(string s, int k) {
        int n = s.length();
        int count = 0;

        for(int i = 0; i < k ;i++){
            if(isvowel(s , i)){
                count++;
            }
        }

        int ans = count;

        int start = 0;
        int end = k;

        while(end < n){
            if(isvowel(s , start)){
                count--;
            }
            start++;

            if(isvowel(s , end)){
                count++;
            }
            end++;

            ans = max(ans , count);
        }

        return ans;
    }
};
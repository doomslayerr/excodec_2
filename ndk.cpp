class Solution {
private:
    int f(int i , int j , string word1 , string word2){
        if(i < 0 && j < 0) return 0;

        if(word1[i] == word2[j]) return 1 + f(i-1 , j-1 , word1, word2);
        else{
            return max(f(i-1 , j , word1 , word2) , f(i , j-1 , word1 , word2));
        }
    }
public:
    int minDistance(string word1, string word2) {
       int i = word1.size();
       int j = word2.size();
       int total = i+j;
       int ans = f(i-1 , j-1 , word1 , word2);
       return total - 2*ans;       
    }
};

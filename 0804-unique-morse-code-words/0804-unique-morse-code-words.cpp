class Solution {
public:
 
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> alphabet = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-.."
                ,"--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> uniqueRepresentations;

        for (string word : words) {
            string newWord;
            for (char symbol : word) 
                newWord += (alphabet[symbol - 'a']);
            
            uniqueRepresentations.insert(newWord);
        }
        return uniqueRepresentations.size();
    }
};
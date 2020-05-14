class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails; 
        for (string email : emails) {
            string formattedEmail ;
            
//             String is mutable in c++
            for (char c: email) {
                if (c == '+' || c == '@') break; 
                if (c == '.') continue; 
                formattedEmail += c; 
            }
            formattedEmail += email.substr(email.find('@')); 
            uniqueEmails.insert(formattedEmail); 
        }
        return uniqueEmails.size(); 
    }
};

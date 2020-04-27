#include <stack>
#include <string>

using namespace std;

string isBalanced(string s) {
    if (s.empty()) {
        return "YES"; 
    }

    stack <int> stack; 
    for (char c: s) {
        if (c == '{' || c == '[' || c == '(') {
            stack.push(c); 
        } else {
            if (stack.empty()) return "NO"; 
            if (c == ']' && stack.top() != '[') return "NO"; 
            if (c == '}' && stack.top() != '{') return "NO"; 
            if (c == ')' && stack.top() != '(') return "NO"; 
            stack.pop(); 
        }
    }
    
    if (stack.empty()) return "YES";
    return "NO";
}
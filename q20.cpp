/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.*/
#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
class Solution {
    public:
        bool isValid(string s) {
            if(s.length()%2 != 0){
                return false;
            }
    
            stack<char> st;
            
            for(int i=0;i<s.length();i++){
                if(s[i] == '(') st.push(s[i]);
                else if(s[i] == '[') st.push(s[i]);
                else if(s[i] == '{') st.push(s[i]);
    
                else if(s[i] == ')'){
                    if(st.empty() != true){    
                        if(st.top() == '('){
                            st.pop();
                        }
                        else{
                            st.push(s[i]);
                        }
                    }
                    else{
                        st.push(s[i]);
                    }
                }
                else if(s[i] == '}'){
                    if(st.empty() != true){
                        if(st.top() == '{'){
                            st.pop();
                        }
                        else{
                            st.push(s[i]);
                        }
                    }
                     else{
                        st.push(s[i]);
                    }
                }
                else if(s[i] == ']'){
                    if(st.empty() != true){
                        if(st.top() == '['){
                            st.pop();
                        }
                        else{
                            st.push(s[i]);
                        }
                    }
                     else{
                        st.push(s[i]);
                    }
                }
            }
    
            if(st.empty() == true){
                return true;
            }
            else{
                return false;
            }
    
        }
    };
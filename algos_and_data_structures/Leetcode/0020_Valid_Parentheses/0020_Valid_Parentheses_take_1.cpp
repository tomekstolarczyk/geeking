#include <string>
#include <stack>
using namespace std;

class Solution 
{
public:

    bool isValid(string s) 
    {
        if(s.size()==1)
        {
            return false;
        }

        if(s[0] == '}' || s[0] == ']' || s[0] == ')')
        {
            return false;
        }

        std::stack<char> st;
        int iter = 0;
        st.push(s[iter]);
        iter+=1;

        while(iter < s.size())
        {

            if(st.size()==0)
            {
                if(s[iter] == ']' || s[iter] == ')' || s[iter] == '}')
                {
                    return false;
                }

                st.push(s[iter]);
                iter++;
                continue;
            }

            if(st.top() == '{')
            {
                if(s[iter] == ']' || s[iter] == ')') 
                {
                    return false;
                }
                
                else if(s[iter] == '}')
                {
                    st.pop();
                    iter++;
                }

                else 
                {
                    st.push(s[iter]);
                    iter++;
                }

            }

            else if (st.top() == '(')
            {
                if(s[iter] == ']' || s[iter] == '}') 
                {
                    return false;
                }
                
                else if(s[iter] == ')')
                {
                    st.pop();
                    iter++;
                }

                else 
                {
                    st.push(s[iter]);
                    iter++;
                }
            }
            else // '['
            {
                if(s[iter] == ')' || s[iter] == '}') 
                {
                    return false;
                }
                
                else if(s[iter] == ']')
                {
                    st.pop();
                    iter++;
                }

                else 
                {
                    st.push(s[iter]);
                    iter++;
                }
            }

        }

        if(st.size()==0) {return true;}
        else {return false;}
    }
};

int main()
{
    Solution sol;

}
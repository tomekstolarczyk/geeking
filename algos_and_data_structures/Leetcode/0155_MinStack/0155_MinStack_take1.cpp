#include <vector>
class MinStack 
{

private:

    std::vector<int> st;
    std::vector<int> currentMinimum;

public:

    MinStack() 
    {
        // nothing needed
    }
    
    void push(int value) 
    {
        st.push_back(value);

        if(currentMinimum.empty() || currentMinimum.back()>=value)
        {
            currentMinimum.push_back(value);
        }
    }
    
    void pop() 
    {
        if(currentMinimum.back()==st.back())
        {
            currentMinimum.pop_back();
        }
        st.pop_back();
    }
    
    int top() 
    {
        return st.back();
    }
    
    int getMin() 
    {
        return currentMinimum.back();
    }

};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
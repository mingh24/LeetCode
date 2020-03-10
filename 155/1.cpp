class MinStack {
public:
    /** initialize your data structure here. */

    stack<int> data;
    stack<int> helper;

    MinStack() {
    }

    void push(int x) {
        data.push(x);
        if (helper.empty() || helper.top() >= x)
            helper.push(x);
        else
            helper.push(helper.top());
    }

    void pop() {
        data.pop();
        helper.pop();
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return helper.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
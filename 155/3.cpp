class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        min_s.push(INT_MAX);
    }

    void push(int x) {
        s.push(x);
        min_s.push(min(x, min_s.top()));
    }

    void pop() {
        s.pop();
        min_s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return min_s.top();
    }

private:
    stack<int> s;
    stack<int> min_s;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
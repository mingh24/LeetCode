class StackOfPlates {
public:
    StackOfPlates(int cap) {
        capacity = cap;
    }

    void push(int val) {
        if (stacks.empty() || stacks.back().size() >= capacity) {
            stack<int> s;
            s.emplace(val);

            if (s.size() <= capacity) {
                stacks.emplace_back(s);
            }
        } else if (stacks.back().size() < capacity) {
            stacks.back().emplace(val);
        }
    }

    int pop() {
        if (stacks.empty()) {
            return -1;
        } else {
            int x = stacks.back().top();
            stacks.back().pop();

            if (stacks.back().empty()) {
                stacks.pop_back();
            }

            return x;
        }
    }

    int popAt(int index) {
        if (stacks.empty() || stacks.size() < index + 1) {
            return -1;
        } else {
            int x = stacks[index].top();
            stacks[index].pop();

            if (stacks[index].empty()) {
                stacks.erase(stacks.begin() + index);
            }

            return x;
        }
    }

private:
    vector<stack<int>> stacks;
    int capacity;
};

/**
 * Your StackOfPlates object will be instantiated and called as such:
 * StackOfPlates* obj = new StackOfPlates(cap);
 * obj->push(val);
 * int param_2 = obj->pop();
 * int param_3 = obj->popAt(index);
 */
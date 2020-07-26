static const auto io_sync_off = []() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
};

class CQueue {
public:
    CQueue() {
    }

    void appendTail(int value) {
        s1.emplace(value);
    }

    int deleteHead() {
        int deleted_value = -1;

        if (!s2.empty()) {
            deleted_value = s2.top();
            s2.pop();
        } else if (!s1.empty()) {
            while (s1.size()) {
                int temp = s1.top();
                s1.pop();
                s2.emplace(temp);
            }

            deleted_value = s2.top();
            s2.pop();
        }

        return deleted_value;
    }

private:
    stack<int> s1, s2;
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
class MaxQueue {
public:
    int nums[10000];
    int begin;
    int end;
    int max;

    MaxQueue() {
        begin = 0;
        end = 0;
        max = 0;
    }

    int max_value() {
        if (end - begin == 0)
            return -1;
        else
            return nums[max];
    }

    void push_back(int value) {
        nums[end] = value;
        if (value >= nums[max])
            max = end;
        ++end;
    }

    int pop_front() {
        if (end - begin == 0) {
            return -1;
        } else {
            ++begin;
            if (begin - 1 == max) {
                max = begin;
                for (int i = begin; i <= end; ++i)
                    if (nums[i] >= nums[max])
                        max = i;
            }
            return nums[begin - 1];
        }
    }
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */
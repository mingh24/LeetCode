class TripleInOne {
public:
    TripleInOne(int stackSize) {
        stack_size = stackSize;
        array_stack = vector<int>(3 * stack_size, 0);
        top1 = -1;
        top2 = -1 + stack_size;
        top3 = -1 + 2 * stack_size;
    }

    void push(int stackNum, int value) {
        if (stackNum == 0) {
            if (top1 != stack_size - 1) {
                array_stack[++top1] = value;
            }
        } else if (stackNum == 1) {
            if (top2 != 2 * stack_size - 1) {
                array_stack[++top2] = value;
            }
        } else if (stackNum == 2) {
            if (top3 != 3 * stack_size - 1) {
                array_stack[++top3] = value;
            }
        }
    }

    int pop(int stackNum) {
        if (isEmpty(stackNum)) {
            return -1;
        } else if (stackNum == 0) {
            return array_stack[top1--];
        } else if (stackNum == 1) {
            return array_stack[top2--];
        } else if (stackNum == 2) {
            return array_stack[top3--];
        }

        return -1;
    }

    int peek(int stackNum) {
        if (isEmpty(stackNum)) {
            return -1;
        } else if (stackNum == 0) {
            return array_stack[top1];
        } else if (stackNum == 1) {
            return array_stack[top2];
        } else if (stackNum == 2) {
            return array_stack[top3];
        }

        return -1;
    }

    bool isEmpty(int stackNum) {
        if (stackNum == 0) {
            return top1 == -1;
        } else if (stackNum == 1) {
            return top2 == -1 + stack_size;
        } else if (stackNum == 2) {
            return top3 == -1 + 2 * stack_size;
        }

        return true;
    }

private:
    int stack_size;
    vector<int> array_stack;
    int top1, top2, top3;
};

/**
 * Your TripleInOne object will be instantiated and called as such:
 * TripleInOne* obj = new TripleInOne(stackSize);
 * obj->push(stackNum,value);
 * int param_2 = obj->pop(stackNum);
 * int param_3 = obj->peek(stackNum);
 * bool param_4 = obj->isEmpty(stackNum);
 */
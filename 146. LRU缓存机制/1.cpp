class LRUCache {
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        if (lru_map.find(key) != lru_map.end()) {
            lru_list.splice(lru_list.begin(), lru_list, lru_map[key]);
            return lru_map[key]->second;
        }

        return -1;
    }

    void put(int key, int value) {
        if (lru_map.find(key) != lru_map.end()) {
            lru_list.splice(lru_list.begin(), lru_list, lru_map[key]);
            lru_map[key]->second = value;
            return;
        }

        lru_list.emplace_front(key, value);
        lru_map[key] = lru_list.begin();

        if (lru_map.size() > capacity) {
            lru_map.erase(lru_list.back().first);
            lru_list.pop_back();
        }
    }

private:
    list<pair<int, int>> lru_list;
    unordered_map<int, list<pair<int, int>>::iterator> lru_map;
    int capacity;
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
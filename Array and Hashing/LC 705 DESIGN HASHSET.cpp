// LeetCode 705 - Design HashSet
// Pattern: Implementing Hashing Idea
// Time Complexity:  O(1)
// Space Complexity: O(n)
class MyHashSet {
public:
    vector<bool> storage;

    MyHashSet() {
      storage = vector<bool>(1000001,false);  
    }
    
    void add(int key) {
        storage[key]=true;
    }
    
    void remove(int key) {
        storage[key]=false;
    }
    
    bool contains(int key) {
        return storage[key];
    }
};
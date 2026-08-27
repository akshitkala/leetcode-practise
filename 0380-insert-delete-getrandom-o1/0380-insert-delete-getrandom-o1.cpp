class RandomizedSet {
public:
    unordered_map<int,int> mp;
    vector<int> arr;

    RandomizedSet() {}

    bool insert(int val) {
        if(mp.find(val) != mp.end()) {
            return false;
        }

        mp[val] = arr.size();
        arr.push_back(val);

        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()) {
            return false;
        }

        int index = mp[val];
        int last = arr.back();

        arr[index] = last;
        mp[last] = index;

        arr.pop_back();
        mp.erase(val);

        return true;
    }
    
    int getRandom() {
        int x = rand() % arr.size();
        return arr[x];
    }
};
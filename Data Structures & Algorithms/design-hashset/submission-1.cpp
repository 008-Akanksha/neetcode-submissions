class MyHashSet {
public:
  
  //method 2 ==> using seperate channing method 
   
    int m; //no. of buckets
    vector<list<int>>buckets;
    int getIndex(int key)
    {
        return key % m;
    }

    MyHashSet() 
    {
        m = 15000;
        buckets = vector<list<int>>(m,list<int>{});
    }

    void add(int key)
    {
        int idx = getIndex(key);

        auto itr = find(buckets[idx].begin(), buckets[idx].end(),key);

        if(itr == buckets[idx].end()) // not present in bucket
            buckets[idx].push_back(key);
        
    }
    
    void remove(int key)
    {
        int idx = getIndex(key);

        auto itr = find(buckets[idx].begin(), buckets[idx].end(),key);

        if(itr != buckets[idx].end()) //  present in bucket
            buckets[idx].erase(itr);    
    }
    
    bool contains(int key) {
        int idx = getIndex(key);

        auto itr = find(buckets[idx].begin(), buckets[idx].end(),key);

        return itr != buckets[idx].end(); //  present in bucket
             
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
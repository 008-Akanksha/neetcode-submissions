class MyHashMap {
public:
  //method 2 ==> using hashing methid
  int m;
  vector<list<pair<int,int>>>bucket;
    MyHashMap() 
    {
         m = 15000;
         bucket.resize(m);  
    }
    
    void put(int key, int value) {
        int idx = key % m;

        for(auto &it : bucket[idx])
        {
            if(it.first == key)
            {
                it.second = value;
                return;
            }
        }

        //if(itr == bucket[idx].end()) // not present
            bucket[idx].push_back({key,value});
        
    }
    
    int get(int key) {
        
        int idx = key % m;
        for(auto &it : bucket[idx])
        {
            if(it.first == key)
                return it.second;
        }  
        return -1; 
    }
    
    void remove(int key) {
        int idx = key % m;

        for(auto itr = bucket[idx].begin(); itr != bucket[idx].end(); ++itr)
        {
            if(itr->first == key)
            {
                bucket[idx].erase(itr);
                return;
            }
        }
        
    }
};

//t.c = 0(1)

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
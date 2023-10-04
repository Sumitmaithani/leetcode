class MyHashMap {
public:
    vector<pair<int,int>> hash;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        bool isPresent=false;
        for(int i=0;i<hash.size();i++){
            if(hash[i].first==key){
                hash[i].second=value;
                isPresent=true;
            }
        }
        if(!isPresent){
            hash.push_back({key,value});
        }
    }
    
    int get(int key) {
        for(int i=0;i<hash.size();i++){
            if(hash[i].first==key){
                return hash[i].second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int i=0;i<hash.size();i++){
            if(hash[i].first==key){
                hash[i].second=-1;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
class NumberContainers {
    private:
    unordered_map<int,int>indextonumber;
    unordered_map<int,set<int>>numbertoindex;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(indextonumber.find(index)!=indextonumber.end()){
            int prevnumber=indextonumber[index];
            numbertoindex[prevnumber].erase(index);
            if(numbertoindex[prevnumber].size()==0)numbertoindex.erase(prevnumber);
        }
        
        numbertoindex[number].insert(index);
        indextonumber[index]=number;
        return;
    }
    
    int find(int number) {
       if(numbertoindex.find(number)!=numbertoindex.end())
       return *numbertoindex[number].begin();
       return -1; 
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */
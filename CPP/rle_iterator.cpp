class RLEIterator {
public:
     vector<int>A;
    
    // vector<int>::iterator it; 
    int index;
    
    RLEIterator(vector<int>& a): A(a) {
       index=0;
    }
    
    int next(int n) {
        while(index < A.size() && n > A[index]){
            n = n - A[index];
            index += 2;
        }
        
        if(index >= A.size()){
            return -1;
        }
        
        A[index] = A[index] - n;
        return A[index + 1];
    }
    
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(A);
 * int param_1 = obj->next(n);
 */

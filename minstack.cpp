class MinStack {
public:
    /** initialize your data structure here. */
    
    MinStack() {
        _head = nullptr;
        //_val = 0;
    }
    
    void push(int val) {
        MinStack* obj = new MinStack();
        obj->_val = val;
        obj->_next = _head;
        _head = obj;
    }
    
    void pop() {
        //check if stack is empty. if it is, do nothing
        //if(_head!=nullptr){
            MinStack *oh = _head;  // Need to grab this before updating _head
            int ohv = oh->_val;  // Need to also grab value for returning
            _head = _head->_next;
            delete oh;
        //}
    }
    
    int top() {
        /*
        if(_head==nullptr){
            return NULL;
        }
        */
        return _head->_val;
    }
    
    int getMin() {
        /*
        if(_head==nullptr){
            return nullptr;
        }
        */
        MinStack *here = _head;
        int minVal = here->_val;
        while(here != NULL){
            if(minVal > here->_val){
                minVal = here->_val;
            }
            here = here->_next;
        }
        return minVal;
    }
    
 private:
    MinStack* _head;
    MinStack* _next;
    int _val;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
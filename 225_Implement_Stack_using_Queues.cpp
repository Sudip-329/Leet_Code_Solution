/*class MyStack {   //one queue approch
    queue<int> q;

public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; ++i) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};*/
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

class MyStack {   //two queue qpproch
private:
    queue<int> q1; //declare your queues in private scope
    queue<int> q2;
public:
    MyStack() {   
    }
    
    void push(int x) {

        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front()); 
            q1.pop();
        }
        swap(q1, q2);
    }
    
    int pop() {
        int res = top();
        q1.pop();
        return res;
    }

    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
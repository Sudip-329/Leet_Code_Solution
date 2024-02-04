/*class SeatManager {
public:
    bool A[100001] = {0};
    int top; int n;
    SeatManager(int n) {
        this ->n = n;
        fill(A, A+n, 1);
        top = 1;
    }
    
    int reserve() {
        int x=top++;
        while(top < n && !A[top])
            top++;
        A[x] = 0;
        return x;
        
    }
    
    void unreserve(int seatNumber) {
        A[seatNumber] = 1;
        if(top>seatNumber) top = seatNumber;
        
    }
};
*/


class SeatManager {
    int s;
    vector<int> v;
    priority_queue<int,vector<int>,greater<>> p;

public:
    SeatManager(int n) {
        s = 1;
        v.resize(n+1,0);
        
    }
    
    int reserve() {

        if(!p.empty()) {
            int num = p.top();
            p.pop();
            v[num] = 1;
            return num;
        }

        int num = s++;
        v[num] = 1;
        return num;
        
    }
    
    void unreserve(int seatNumber) {

        p.push(seatNumber);
        v[seatNumber] = 0;
        
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */
class Queue {
public:
    
    int qrear;
    int qfront;
    int* res;
    int size;
    Queue() {
        // Implement the Constructor
        
        size=100000;
        res=new int[size];
        this->qrear=-1;
        this->qfront=-1;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return (qrear==qfront)? true:false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        qrear++;
        res[qrear]=data;
        
    }

    int dequeue() {
        // Implement the dequeue() function
        if(qfront==qrear) return -1;
        qfront++;
        int v=res[qfront];
        return v;
    }

    int front() {
        // Implement the front() function
        
        if(qfront==qrear) return -1;
        
        return res[qfront+1];
    }
};
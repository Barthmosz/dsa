class Queue {
    public:
        Queue(unsigned int capacity);
        ~Queue();

        void enqueue(int item);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int size();
        void display();

    private:
        int front, rear, count;
        int* queue;
        unsigned int capacity;
};
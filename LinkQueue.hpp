#include "LinkedList.hpp"


template <class E>
class LQueue {
private:
  int maxSize;
  int front;
  int rear;
  LinkedList<E>* list;
  E temp;

public:
  LQueue(int size) {  // Constructor
    maxSize = size;
    rear=0;
    front=0;
    list = new LinkedList<E>;
  }

  ~LQueue() { delete list; } // Destructor

  void clear() { rear = 0; front = 0; } // Reinitialize

  void enqueue(const E& data) {
    if (rear+1 > maxSize) {
       cout << "The Queue is full " <<'\n';
    }else{
      list->append(data);
      cout << "Adding: "<<data <<'\n';
      rear++;
      if (rear == 1) {
        cout << " uno... "<<'\n';
        temp = list->get(0);
      }
    }
  }

  E dequeue() {           // Take element out
    if (front == maxSize) {
       clear();
       cout << "The Queue is empty and returning first value just for this case " <<'\n';
       return temp;
    }else{
      front++;
      return list->remove(0);
    }

  }

  const E& frontValue() {  // Get front value
    if (front == maxSize) {
      clear();
      cout << "The Queue is empty and returning first value just for this case " <<'\n';
      return temp;
    }else{
      return list->get(0);
    }
  }

  int length() const {
    if (front == 0) {
      return rear;
    }else{
      return rear-front;
    }

  }
};

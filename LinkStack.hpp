
#include "LinkedList.hpp"

template <class E>
class LStack {
private:
  int maxSize;
  int top;
  LinkedList<E>* list;
  E temp;

public:
  LStack(int size ) { //Constructor
    maxSize = size;
    top = 0;
    list = new LinkedList<E>;
  }

  ~LStack() { delete list; }  // Destructor

  void clear() { top = 0; }      // Reinitialize

  void push(const E& data) {
    if (top+1 > maxSize) {
       cout << "The Stack is full " <<'\n';
    }else{
      list->append(data);
      cout << "Adding: "<<data <<'\n';
      top++;
      if (top == 1) {
        cout << " uno... "<<'\n';
        temp = list->get(0);
      }
    }

  }

  const E pop() {                // Pop top element
    if (top <=0) {
       cout << "The Stack is empty and returning first value " <<'\n';
       return temp;
    }else{
      return list->remove(--top);
    }
  }

  const E& topValue() const {     // Return top element
    if (top <=0) {
       cout << "The Stack is empty and returning first value " <<'\n';
       return temp;
    }else{
      return list->get(top-1);
    }
  }

  int length() const { return top; }  // Return length

};

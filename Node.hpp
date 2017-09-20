
template <class E>
class Node {
private:
  Node* prev;
  Node* next;
  E data;
public:
  Node(){
    next = NULL;
    prev = NULL;
  }

  Node(const E& elem, Node* preval =NULL, Node* nextval =NULL){
    data = elem;
    prev = preval;
    next = nextval;
  }

  Node* getNext() const{
    return next;
  }

  void setNext( Node* nextval) {
    next = nextval;
  }

  Node* getPrev() const{
    return prev;
  }

  void setPrev( Node* preval) {
    prev = preval;
  }

  const E& getData() const {
    return data;
  }

  void setData(const E& elem){
    data = elem;
  }
};

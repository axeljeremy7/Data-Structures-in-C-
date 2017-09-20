
template <class Key, class E>
class KVpair {
  private:
    Key key;
    E elem;

  public:

  KVpair() {}
  KVpair(Key kval, E eval){
    key = kval; elem = eval;
  }

  // Copy constructor style 1
  KVpair(const KVpair& kv){
    key = kv.key; elem = kv.elem;
  }

  // Copy constructor style 2
  void operator =(const KVpair& kv){
    key = kv.key; elem = kv.elem;
  }

  ~KVpair(){}

  Key getKey(){
    return key;
  }

  void setKey(Key key2){
    key = key2;
  }

  E getValue(){
    return elem;
  }

};

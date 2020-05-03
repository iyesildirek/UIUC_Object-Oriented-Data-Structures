//Provided Classes
class Pair {
  public:
    Pair(int, int);

  private:
    int a_, b_;
};
  
class sumPair : public Pair {
  public:
    int sum;
    sumPair(int,int);
};
#include <iostream>

struct node
{
  int data;
  node *next;
};

class list
{
  private:
    node *head, *tail;
    
  public:
    list() : head(NULL), tail(NULL) {} 
};

int main()
{

  return 0;
}
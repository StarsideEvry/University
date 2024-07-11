 
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

/* декларации на класовете List и Iterator за да могат да бъдат използвани при дефиниране на List*/
class List;
class Iterator;
 
/* елемент на свързания списък */
class Node {
public:
   Node(string);
private:
   string data;
   Node* previous;
   Node* next;
/* член-функциите на класовете List и Iterator имат достъп до частните членове на класа Node */
   friend class List;
   friend class Iterator;
};

class List {
public:
   List();
   void push_back(string);
   void insert(Iterator, string);
   void erase(Iterator);
   Iterator begin(); /* начало на свързания списък */
   Iterator end();   /* край на свързания списък */
private:
   Node* first;  /* първи елемент на свързания списък */
   Node* last;   /* последен елемент на свързания списък */
};

class Iterator {
public:
   Iterator();
   string get() const; /* реализира операция * за итератори */
   void next();        /* реализира операция ++ за итератори */
   void previous();    /* реализира операция -- за итератори */
   bool not_equal(Iterator) const; /* реализира операция != */
private:
   Node* position; /* текущ елемент на свързания списък */
   Node* last;     /* последен елемент на свързания списък */
 
/* член-функциите на класа List имат достъп до частните членове на Iterator */
   friend class List;
};

Node::Node(string s)
/* ПОЛУЧАВА: s - данната, която ще се съхранява в този елемент */
{
   data = s; 
   previous = NULL;  next = NULL;
}

List::List()
/* ЦЕЛ: конструира празен свързан списък */
{
   first = NULL; last = NULL;
}

void List::push_back(string s)
/* ЦЕЛ: добавя елемент към свързан спесък
   ПОЛУЧАВА: s - данната, която ще се добави
*/
{
  Node* newnode = new Node(s);
  if (last == NULL)            /* празен свързан списък */
  {
     first = newnode; last = newnode;
  }
  else
  {
    newnode->previous = last;
    last->next = newnode;
    last = newnode;
  }
}

void List::insert(Iterator iter, string s)
/* ЦЕЛ: вмъква елемент в свързан списък
   ПОЛУЧАВА: iter - позицията, преди която да се вмъкне
             s - данната, която ще се вмъкне
*/
{
  if (iter.position == NULL) /* вмъкване в края */
  {
     push_back(s);  return; 
  }
  Node* after = iter.position;
  Node* before = after->previous;
  Node* newnode = new Node(s);
 
  newnode->previous = before;
  newnode->next = after;
  after->previous = newnode;
 
  if (before == NULL) first = newnode; /* вмъкване в началото */
  else before->next = newnode;
}

void List::erase(Iterator iter)
/* ЦЕЛ: отстранява елемент от свързан списък
   ПОЛУЧАВА: iter - позицията на елемента, който ще се отстрани
*/
{
  assert(iter.position != NULL);
 
  Node* remove = iter.position;
  Node* before = remove->previous;
  Node* after = remove->next;
 
  if (remove == first) first = after;/* изтриване на първия елемент */
  else          before->next = after;
 
  if (remove == last)  last = before;/* изтриване на последния елемент */
  else      after->previous = before;
 
  iter.position = after;
  delete remove;
}

Iterator List::begin()
/* ВРЪЩА: итератор, сочещ към началната позиция на свързан списък */
{
  Iterator iter;
  iter.position = first;
  iter.last = last;
  return iter;
}

Iterator List::end()
/* ВРЪЩА: итератор, сочещ след края на списъка (NULL) */
{
  Iterator iter;
  iter.position = NULL;
  iter.last = last;
  return iter;
}

Iterator::Iterator()
{ 
  position = NULL;   last = NULL; 
}

string Iterator::get() const
/* ВРЪЩА: данната на елемента, който сочи итератора */
{
  assert(position != NULL);
  return position->data;
}

void Iterator::next()
/* ЦЕЛ: да премести итератора на следващия елемент от списъка */
{
  assert(position != NULL);
  position = position->next;
}

void Iterator::previous()
/* ЦЕЛ: да премести итератора на предишния елемент от списъка */
{
  if (position == NULL)  position = last;
  else                   position = position->previous;
  assert(position != NULL);
}

bool Iterator::not_equal(Iterator b) const
/* ЦЕЛ: сравнява два итератора
   ПОЛУЧАВА: b - вторият итератор за сравнението
   ВРЪЩА: true ако този итератор и b не са равни
*/
{
  return position != b.position;
}
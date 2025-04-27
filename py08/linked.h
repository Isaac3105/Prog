#ifndef LINKED_H
#define LINKED_H

struct node {
  int value;
  node *next;
};

class List {
public:
  // List constructor
  List();

  // Add an element to the front of the list
  void push_front(int value);

  // Add an element to the back of the list
  void push_back(int value);

  // Remove and return the element at the front of the list (0 if empty)
  int pop_front();

  // Remove and return the element at the back of the list (0 if empty)
  int pop_back();

  int size();

  void print();

  ~List();

private:
  node *head;
  int size_;
};

// Example implementation
int List::pop_back() {
  if (size_ == 0) return 0;

  if (size_ == 1) {
    int result = head->value;
    delete head;
    head = nullptr;

    size_ = 0;
    return result;
  }

  // Find the penultimate node
  node *current = head;
  while (current->next->next != nullptr) current = current->next;

  // Remove the last node and update the penultimate node
  int result = current->next->value;
  delete current->next;
  current->next = nullptr;

  size_--;
  return result;
}

#endif // LINKED_H

#ifndef STACK_H
#define STACK_H

class Stack
{
   private:
      int *stack;
      int size_of_stack;
      char input;
      int num_input;

   public:
      Stack();
      void get_input();
      int pop();
      void push();
      void push_pop();
      void re_size_array();
      void print_stack();
      void remove();
};


#endif

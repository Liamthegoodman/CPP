#include<iostream>
using namespace std;

class stackoverflow : public exception {
public:
    stackoverflow() {
        cout << "Stack overflow" << endl;
    }
};

class stackunderflow : public exception {
public:
    stackunderflow() {
        cout << "Stack underflow" << endl;
    }
};

class Stack {
private:
    int *stack;
    int top = -1;
    int size;
public:
    Stack(int size) {
        this->size = size;
        stack = new int[size];
    }
    void push(int x) {
        if (top == size - 1) {
            throw stackoverflow();
        }
        top++;
        stack[top] = x;
    }
    int pop() {
        if (top == -1) {
            throw stackunderflow();
        }
        return stack[top--];
    }
};

int main() {
    Stack s(5);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8); // This will cause stackoverflow exception

    return 0;
}

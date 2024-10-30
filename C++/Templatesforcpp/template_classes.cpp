#include <iostream>
using namespace std;

template <class T>
class Stack {
private:
    T *stk;
    int top;
    int size;
public:
    Stack(int size) {
        this->size = size;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};

template <class T>
void Stack<T>::push(T x) {
    if (top == size - 1) {
        cout << "Stack is Full" << endl;
        return; // Added return to prevent further execution
    }
    top++;
    stk[top] = x;
}

template <class T>
T Stack<T>::pop() {
    if (top == -1) {
        cout << "Stack is Empty" << endl;
        return 0; // Return a default value of type T
    }
    return stk[top--];
}

int main() {
    Stack<int> s(10); // Specify the template type as int
    s.push(10);
    s.push(23);
    s.push(33);

    cout << s.pop() << endl; // Should print 33
    cout << s.pop() << endl; // Should print 23
    cout << s.pop() << endl; // Should print 10
    cout << s.pop() << endl; // Should print "Stack is Empty" and return 0

    return 0;
}

#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

void printStack(stack<string> s) {
  while (!s.empty()) {
    cout << s.top();
    s.pop();
    cout << " ";
  }
  cout << endl;
}

string getResult(string &s) {
  string result {};
  s.erase(remove(s.begin(), s.end(), '('), s.end());

  return s;

}

int main() {
  stack<string> stringStack;
  string topString {};
  string str1 = "(bar)"; // expected: "rab"
  string str2 = "foo(bar)baz"; // expected: "foorabbaz"
  string str3 = "foo(bar)baz(blim)"; // expected: "foorabbazmilb" 
  string str4 = "foo(bar(baz))blim"; // expected: "foobazrabblim"
  
  stringStack.push({});
  for (size_t i = 0; i < str4.length(); i++) {
      if (str4[i] == '(') {
        stringStack.push({});
        cout << "Encountered a '('" << endl;
        cout << "size of stack " << stringStack.size() << endl;
        printStack(stringStack);
        cout << "------------------" << endl;
      }
      else if (str4[i] == ')') {
        // reverse the string at current stack top
        cout << "Encountered a ')'" << endl;
        cout << "size of stack " << stringStack.size() << endl;
        printStack(stringStack);
        string topString = stringStack.top();
        cout << "topString before Reverse: " << topString << endl; 
        reverse(topString.begin(), topString.end());
        cout << "topString after Reverse: " << topString << endl << endl;

        // remove the string from stack
        stringStack.pop();
        cout << "removed element from stack:" <<endl;
        printStack(stringStack);
        cout << "size of stack " << stringStack.size() << endl;
        if (stringStack.empty()) {
          cout << "stack is empty: " << endl;
          stringStack.push(topString);
          printStack(stringStack);
        }
        else {
          cout << "Stack wasn't empty: " << endl;
          stringStack.top() += topString;
          printStack(stringStack);
          cout << "size of stack " << stringStack.size() << endl;

        }
        cout << "----------------------" << endl;
      }
      else {
        stringStack.top() += str4[i];
        cout << "Encountered a letter" << endl;
        printStack(stringStack);
        cout << "size of stack " << stringStack.size() << endl;
        cout << "----------------------" << endl;
      }
  }
  cout << "===================================" << endl;
  cout << stringStack.top() << endl;
  return EXIT_SUCCESS;
}
  
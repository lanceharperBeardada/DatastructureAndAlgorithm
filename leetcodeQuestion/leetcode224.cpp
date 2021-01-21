/*
  负数没解决，不管了
  还是逆波兰表达式好用
*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;
class Solution
{
public:
  void compute(stack<int> &number_stack, stack<char> &operator_stack)
  {
    if (number_stack.size() < 2)
      return;
    int pop1 = number_stack.top();
    number_stack.pop();
    int pop2 = number_stack.top();
    number_stack.pop();
    if (operator_stack.top() == '+')
    {
      number_stack.push(pop1 + pop2);
    }
    else
    {
      number_stack.push(pop2 - pop1);
    }
    operator_stack.pop();
  }
  int calculate(string s)
  {
    static const int BEGIN_STATE = 0;
    static const int NUMBER_STATE = 1;
    static const int OPERATOR_STATE = 2;
    stack<int> number_stack;
    stack<char> operator_stack;
    int number = 0;
    int compute_flag = 0;
    int STATE = BEGIN_STATE;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == ' ')
      {
        continue;
      }
      switch (STATE)
      {
      case BEGIN_STATE:
        if (s[i] >= '0' && s[i] <= '9')
        {
          STATE = NUMBER_STATE;
        }
        else
        {
          STATE = OPERATOR_STATE;
        }
        i--;
        continue;
      case NUMBER_STATE:
        if (s[i] >= '0' && s[i] <= '9')
        {
          number = number * 10 + (s[i] - '0');
        }
        else
        {
          number_stack.push(number);
          number = 0;
          if (compute_flag == 1)
          {
            compute(number_stack, operator_stack);
          }
          STATE = OPERATOR_STATE;
          i--;
        }

        continue;
      case OPERATOR_STATE:
        if (s[i] == '+' || s[i] == '-')
        {
          compute_flag = 1;
          operator_stack.push(s[i]);
        }
        else if (s[i] == '(')
        {
          compute_flag = 0;
          STATE = NUMBER_STATE;
        }
        else if (s[i] <= '9' && s[i] >= '0')
        {
          STATE = NUMBER_STATE;
          i--;
        }
        else if (s[i] == ')')
        {
          compute(number_stack, operator_stack);
        }
        continue;
      }
    }

    if (number != 0)
    {
      number_stack.push(number);
      compute(number_stack, operator_stack);
    }
    if (number == 0 && number_stack.empty())
      return 0;
    return number_stack.top();
  }
};

int main()
{
  Solution s;
  cout << s.calculate("5 + (9-1)+3") << endl;
  return 0;
}
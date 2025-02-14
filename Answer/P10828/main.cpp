#include <iostream>
#include <string>
using namespace std;

const int MAX_STACK_SIZE = 10000; // 스택의 최대 크기
int stack[MAX_STACK_SIZE]; // 스택 배열
int topIndex = -1; // 스택의 top을 가리키는 인덱스

bool empty()
{
    return topIndex == -1; // 스택이 비어있으면 true
}

int size()
{
    return topIndex + 1; // 스택의 크기 반환
}

int top()
{
    if (empty()) return -1; // 스택이 비어있으면 -1 반환
    return stack[topIndex]; // 스택의 top 요소 반환
}

void push(int x)
{
    if (topIndex >= MAX_STACK_SIZE - 1) return; // 스택이 가득 차면 무시
    stack[++topIndex] = x; // 스택에 요소 추가
}

void pop()
{
    if (empty())
    {
        cout << -1 << "\n"; // 스택이 비어있으면 -1 출력
    }
    else
    {
        cout << stack[topIndex--] << "\n"; // 스택의 top 요소 출력 후 제거
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int count;
    cin >> count;

    while (count--) {
        string order;
        cin >> order;

        if (order == "push")
        {
            int num;
            cin >> num;
            push(num);
        }
        else if (order == "pop")
        {
            pop();
        }
        else if (order == "size")
        {
            cout << size() << "\n";
        }
        else if (order == "empty")
        {
            cout << empty() << "\n";
        }
        else if (order == "top")
        {
            cout << top() << "\n";
        }
    }

    return 0;
}
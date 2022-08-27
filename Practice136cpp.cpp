// 136. Reverse Queue: You have been given a queue that can store integers as the data. You are required to write a function that reverses the populated queue itself without using any other data structures.

#include <queue>
using namespace std;
void reverseQueue(queue<int> &input)
{

    if (input.empty())
    {

        return;
    }

    int temp = input.front();
    input.pop();

    reverseQueue(input);

    input.push(temp);
}
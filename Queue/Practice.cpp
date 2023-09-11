#include <iostream>
#include <queue>

using namespace std;

void insert(queue<int> &q, int item) {
    // Base case: If the queue is empty or the item is greater than the front of the queue,
    // insert the item at the front.
    if (q.empty() || item > q.front()) {
        q.push(item);
    } else {
        // Remove the front item and insert it at the end of the queue.
        int front = q.front();
        q.pop();
        insert(q, item);
        q.push(front);
    }
}

void sortQueue(queue<int> &q) {
    if (!q.empty()) {
        // Dequeue the front element.
        int front = q.front();
        q.pop();
        // Recursively sort the remaining queue.
        sortQueue(q);
        // Insert the front element in its sorted position.
        insert(q, front);
    }
}

int main() {
    queue<int> q;
    q.push(30);
    q.push(11);
    q.push(15);
    q.push(4);

    cout << "Original Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    q.push(30);
    q.push(11);
    q.push(15);
    q.push(4);

    sortQueue(q);

    cout << "\nQueue after sorting: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}


#include "LinkedList.h"

int main() {
    Link* first = createLink('A');
    Link* temp = first;
    for (int i = 1; i < 26; i++) {
        temp->next = createLink(65 + i);
        temp = temp->next;
    }
    showLinkedList(first);
    destroyLink(first);
    return 0;
}

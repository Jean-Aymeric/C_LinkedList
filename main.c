#include "LinkedList.h"
#include <math.h>
#include <time.h>

int main() {
    srand(time(NULL));
    Link* first = createLink(65 + rand()%26);
    for (int i = 1; i < 26; i++) {
        addDaraToLinkedList(&first, 65 + rand()%26);
    }
    showLinkedList(first);
    printf("\nNumber of links : %d\n", getLinkedListLength(first));
    for (int i = 0; i < 26; i++) {
        printf("%c\t", getByIndexInList(first, i));
    }
    printf("\nCount of A : %d", getCountDataInList(first, 'A'));
    destroyLink(first);
    return 0;
}

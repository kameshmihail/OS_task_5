#include <stdio.h>
#include <assert.h>
#include "deque.h"

int main() {
	deque_type *d = deque_alloc();
	assert(d != NULL);
	int k = 1;
	char str[32];
	char str2[32];
	while (k) {
	printf("0. Exit\n");
	printf("1. Push back\n");
	printf("2. Push front\n");
	printf("3. Check back\n");
	printf("4. Check front\n");
	printf("5. Pop back\n");
	printf("6. Pop front\n");
	printf("7. Check empty\n");
	printf("8. Pop all and show\n");
	
	scanf("%d", &k);
	getchar();
	if (k == 0) {
	deque_free(d);
	return 0;
	}
	if (k == 1) {
	printf("Enter a string to push into deque\n");
	fgets(str, sizeof(str), stdin);
	deque_push_back(d, str);
	}
	if (k == 2) {
	printf("Enter a string to push into deque\n");
	fgets(str2, sizeof(str2), stdin);
	deque_push_front(d, str2);
	}
	if (k == 3) {
	if (deque_is_empty(d) != true) {
		printf("%s\n", deque_peek_back(d));
	}
	}
	if (k == 4) {
	if (deque_is_empty(d) != true) {
		printf("%s\n", deque_peek_front(d));
	}
	}
	if (k == 5) {
	if (deque_is_empty(d) != true) {
		deque_pop_back(d);
	}
	}
	if (k == 6) {
	if (deque_is_empty(d) != true) {
		deque_pop_front(d);
	}
	}
	if (k == 7) {
	if (deque_is_empty(d) != true) {
		printf("Not Empty\n");
	}
	else if (deque_is_empty(d) == true) {
		printf("Empty\n");
	}
	}
	if (k == 8) {
	while (deque_is_empty(d) != true) {
		printf("%s\n", deque_pop_front(d));
	}
	}

	}
	deque_push_back(d, "helle");
	deque_push_back(d, "world");

	while (deque_is_empty(d) != true) {
		printf("%s\n", deque_pop_front(d));
	}

	deque_free(d);

	return 0;
}

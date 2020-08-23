#ifndef DEQUE_H
#define DEQUE_H
#include <stdbool.h>

typedef struct deque_struct deque_type;
typedef char* deque_val_type;

deque_type * deque_alloc();
void deque_free(deque_type *d);
bool deque_is_empty(deque_type *d);
void deque_push_front(deque_type *d, deque_val_type v);
void deque_push_back(deque_type *d, deque_val_type v);
deque_val_type deque_pop_front(deque_type *d);
deque_val_type deque_pop_back(deque_type *d);
deque_val_type deque_peek_front(deque_type *d);
deque_val_type deque_peek_back(deque_type *d);

#endif

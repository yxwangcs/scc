#pragma once

typedef struct _List {
  int size;
  void **items;
} List;

#define INITIAL_LIST_SIZE 32

List *list_new(void);
void list_delete(List *list);
int list_length(List *list);
void list_append(List *list, void *item);
void list_prepend(List *list, void *item);
void list_append_list(List *dest, List *source);
void list_push(List *list, void *item);
void *list_pop(List *list);
void *list_get(List *list, int index);
void list_set(List *list, int index, void *value);

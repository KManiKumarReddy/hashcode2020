#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node *next;
} Node;

int main(void) {
  int sum, n, i, *a, count;
  Node *head, *temp;
  scanf("%d %d", &sum, &n);
  i = n;
  a = (int *)malloc(sizeof(int) * n);
  head = NULL;
  count = 0;
  while(i--) {
    scanf("%d", a+i);
  }
  while(++i < n && sum) {
    if(a[i] < sum) {
      sum -= a[i];
      temp = (Node *)malloc(sizeof(Node));
      temp -> val = i;
      temp-> next = head;
      head = temp;
      count ++;
    }
  }
  printf("%d\n", count);
  while(head) {
    printf("%d ", head->val);
    head = head->next;
  }
  return 0;
}

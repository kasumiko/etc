#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>
#include <stddef.h>
//-------------------------------
//simplequeue(queue,tail,head) 
typedef double QUEUE_TYPE;
typedef double REAL;
REAL hoge;
int tail,head,n;
QUEUE_TYPE *queue;
void inique(QUEUE_TYPE *queue,int tail,int head,int size){
  int i;
  for(i=0;i<size;++i)
  {
    queue[i]=0;
  }
  tail = 0;
  head = 0; 
}
//enque(que,data,&tail,&head,size)
int enque(QUEUE_TYPE *queue,QUEUE_TYPE data,int *tail,int *head,int size)
{
  if (*head % n != (*tail + 1) % n) 
  {
        queue[(*tail)++ % size] = data;
        return *tail - *head;
  } 
  else 
  {
        return 0;
  }
}
//deque(que,&tail,&head,size)
QUEUE_TYPE deque(QUEUE_TYPE *queue, int *head, int *tail, int size) {
    if (*head != *tail) {
        return queue[(*head)++ % size];
    } else {
        return 0;
    }
}
//-------------------------------
//power for integer
int ipow(int x,int n)
{
  int ret = 1;
  while(0<n)
  {
    if(n%2==0)
    {
      x *= x;
      n >>= 1;
    }
    else
    {
      ret *= x ;
      --n;
    }
  }
  return ret;
}


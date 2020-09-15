// queue.h -- Queue 的接口——包含队列接口的原型和定义
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

// 插入 Item 类型的定义，例如
// typedef int Item;       // 用于 use_q.c
// 或者 typedef struct item {int gumption; int charisma;} Item;

// 模拟队列的结构项
typedef struct item
{
    long arrive;    // 一个顾客加入队列的时间
    int processtime;// 该顾客咨询时花费的时间
} Item;

#define MAXQUEUE 10

typedef struct node
{
    Item item;
    struct node * next;
} Node;

typedef struct queue
{
    Node * front;   // 指向队列首项的指针
    Node * rear;   // 指向队列尾项的指针
    int items;     // 队列中的项数
} Queue;

// 接口函数

// 操作：       初始化队列
// 前提条件：   pq 指向一个队列
// 后置条件：   队列被初始化为空
void InitializeQueue(Queue * pq);

// 操作：       检查队列是否已满
// 前提条件：   pq 指向之前被初始化的队列
// 后置条件：   如果队列已满则返回 true，否则返回 false
bool QueueIsFull(const Queue *pq);

// 操作：       检查队列是否是空
// 前提条件：   pq 指向之前被初始化的队列
// 后置条件：   如果队列为空则返回 true，否则返回 false
bool QueueIsEmpty(const Queue *pq);

// 操作：       确定队列中的项数
// 前提条件：   pq 指向之前被初始化的队列
// 后置条件：   返回队列中的项数
int QueueItemCount(const Queue * pq);

// 操作：       在队列末尾添加项
// 前提条件：   pq 指向之前被初始化的队列
//              item 是要被添加在队列末尾的项
// 后置条件：   如果队列不为空，item 将被添加在队列的末尾，
//              该函数返回 true；否则，队列不改变，该函数返回 false
bool EnQueue(Item item, Queue * pq);

// 操作：       从队列的开头删除项
// 前提条件：   pq 指向之前被初始化的队列
// 后置条件：   如果队列不为空，队列首端的 item 将被拷贝到 *pitem 中
//              并被删除，且函数返回 true；
//              如果该操作使得队列为空，则重置队列为空
//              如果队列在操作前为空，该函数返回 false
bool DeQueue(Item *pitem, Queue * pq);

// 操作：       清空队列
// 前提条件：   pq 指向之前被初始化的队列
// 后置条件：   队列被清空
void EmptyTheQueue(Queue * pq);

#endif
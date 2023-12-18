#ifndef __DYNAMIC_ARRAY_H_
#define __DYNAMIC_ARRAY_H_

typedef int ELEMENTTYPE

typedef struct dynamicArray
{
    ELEMENTTYPE *data;       /* 数组空间 */
    int len;        /* 数组的大小 */
    int capacity;   /* 数组的容量 */
}dynamicArray;


#endif
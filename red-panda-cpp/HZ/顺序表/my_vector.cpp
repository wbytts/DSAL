#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 数据结构 = 结构定义 + 结构操作

typedef struct vector {
    int size;
    int count;
    int *data;
} vector;

// 返回一个存储大小为 n 的顺序表
vector *getNewVector(int n) {
    vector *p = (vector*)malloc(sizeof(vector));
    p->size = n;
    p->count = 0;
    p->data = (int*)malloc(sizeof(int) * n);
    return p;
}

// 销毁顺序表
void clear(vector *v) {
    if (v == NULL) return;
    free(v->data);
    free(v);
    return;
}

// 顺序表的插入操作
int insert(vector *v, int pos, int val) {
    if (pos < 0 || pos > v->count) return 0;
    if (v->size == v->count) return 0;
    // 这里要逆序遍历
    for (int i = v->count - 1; i > 0; i--) {
        v->data[i + 1] = v->data[i];
    }
    v->data[pos] = val;
    v->count += 1;
    return 1;
}

// 顺序表的删除操作
int erase(vector *v, int pos) {
    if (pos < 0 || pos >= v->count) return 0;
    for (int i = pos; i < v->count; i++) {
        v->data[i] = v->data[i + 1];
    }
    v->count -= 1;
    return 1;
}

void output_vector(vector *v) {
	int len = 0;
	for(int i = 0; i < v->size; i++) {
		len += printf("%4d", i);
	}
	printf("\n");
	for(int i = 0; i < len; i++) {
		printf("-");
	}
	printf("\n");
	for(int i = 0; i < v->count; i++) {
		printf("%4d", v->data[i]);
	}
	printf("\n");
	return;
}

int main() {
	srand(time(0));
#define MAX_OP 200
	
	vector *v = getNewVector(30);
	for(int i = 0; i< MAX_OP; i++) {
		int op = rand() % 4;
		int pos;
		int val;
		int result;
		
		switch(op) {
		case 0:  
		case 1:
		case 2:
			pos = rand() % (v->count + 1);
			val = rand() % 100;
			result = insert(v, pos, val);
			printf("\n\n op => insert %d to vector[%d] = %d\n", val, pos, result);
			break;
		case 3:
			pos = rand() % (v->count + 2);
			result = erase(v, pos);
			printf("\n\n op => delete vector[%d] = %d\n", pos, result);
		}
		output_vector(v);
	}
	
	clear(v);

    return 0;
}

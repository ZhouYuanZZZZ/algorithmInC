#define VERTEX_NUM 20 //最大顶点数

typedef enum {DG,DN,UDG,UDN} graphKind;//有项图,有项网

typedef struct {

    int vertel[VERTEX_NUM];      //顶点向量
    int matrix[VERTEX_NUM][VERTEX_NUM];    //邻接矩阵
} Graph;
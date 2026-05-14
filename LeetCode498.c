#include <stdio.h>
#include <stdlib.h>

int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize) {
    
    int m = matSize;
    int n = matColSize[0];
    
    int* result = (int*) malloc(m * n * sizeof(int));
    *returnSize = m * n;
    
    int index = 0;
    
    for(int d = 0; d < m + n - 1; d++) {
        
        int tempSize = 0;
        int* temp = (int*) malloc((m < n ? m : n) * sizeof(int));
        
        for(int i = 0; i < m; i++) {
            int j = d - i;
            
            if(j >= 0 && j < n) {
                temp[tempSize++] = mat[i][j];
            }
        }
        
        if(d % 2 == 0) {
            for(int i = tempSize - 1; i >= 0; i--) {
                result[index++] = temp[i];
            }
        } else {
            for(int i = 0; i < tempSize; i++) {
                result[index++] = temp[i];
            }
        }
        
        free(temp);
    }
    
    return result;
}


    for(int i = 0; i < r; i++){
        for(int j = 0; i < c/2; j++){
            swap(mat[i][j], mat[i][c - j-1]);
        }
    }
   
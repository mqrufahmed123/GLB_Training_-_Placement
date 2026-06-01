    vector<int> newCol = {11, 12, 13, 14};
    int colIndex =1;    
    for(int i = 0; i < mat.size(); i++){
        mat[i].insert(mat[i].begin()+colIndex, newCol[i]);
    }

class Solution {
public: 
    bool canplace(char num, int row,int col,vector<vector<char>>&board){
        //row//
        for(int j=0;j<9;j++){
           if(board[row][j]==num) return false;
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==num) return false;
        }
        //subgrid
        int sr=(row/3)*3;
        int sc=(col/3)*3;//we do integer division here
        for(int i=sr;i<sr+3;i++){
            for(int j=sc;j<sc+3;j++){
                if(board[i][j]==num) return false;
            }
        }
        return true;

    }
    bool helper(int row,int col, vector<vector<char>>& board){
        //base case
          if(row==9){
            return true;
          }
          if(col==9){
            return helper(row+1,0,board);
          }
          //main structure
          if(board[row][col]!='.'){
            return helper(row,col+1,board);//if not empty index then traverse ahead
          }
          for(char i='1';i<='9';i++){
                   if(canplace(i,row,col,board)){
                    board[row][col]=i;
                    bool res=helper(row,col+1,board);
                    if(res==true) return true;
                   }
          }
          board[row][col]='.';
          return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        helper(0,0,board);
    }
};
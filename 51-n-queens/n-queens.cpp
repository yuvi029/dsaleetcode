class Solution {
public:
    bool canplace(int r,int c,vector<string>& board,int n){
       //checking the upper left diagonal
        int dupr=r;
        int dupc=c;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q')   return false; //it just iterate on the upper diagonal left
            r--;
            c--;
        }
        //on the straight left
        c=dupc;
        r=dupr;
        while(c>=0){
            if(board[r][c]=='Q') return false;
            c--;
        }
        //checking the lower left diagonal
        r=dupr;
        c=dupc;
        while(r<n && c>=0){
            if(board[r][c]=='Q') return false;
            r++;
            c--;
        }
        return true;
    }
    void solve(int col,vector<string>& board,vector<vector<string>>&ans,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(canplace(row,col,board,n)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        vector<vector<string>> ans;
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};
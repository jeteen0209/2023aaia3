//(寫到一半) week07-1.cpp 學習企劃 simulation 第3週 井字遊戲
//Leetcode 1275
//讀到二維陣列，得到i,j 再顯示 board[i][j] = 1;
class Solution {
public:
void myPrintBoard(int board[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}
    bool myTestWin(int board[3][3], int now){
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;//上面橫
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;//中間橫
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;//上面橫

        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;//左直線
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;//中直線
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;//又直線
        //對角線
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;//左上右下
        if(board[0][2]==now && board[1][1]==now && board[2][0]==now) return true;//右上左下
        return false;//都沒成功，就是失敗
    }//要看看，誰連線成功
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};
        int now = 1;
        for(auto move : moves){
            int i = move[0], j = move[1];
            board[i][j] = now;
            myPrintBoard(board);
            if(myTestWin(board, now)){
                if(now==1) return "A";
                else return "B";
            }
            now = 3 - now;
        }
        if(moves.size()==9) return "Draw";
        else return "Pending";
    }
};

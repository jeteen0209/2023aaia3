//(寫到一半) week07-1.cpp 學習企劃 simulation 第3週 井字遊戲
//Leetcode 1275
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
    string tictactoe(vector<vector<int>>& moves) {
        int board[3][3] = {};
        //for(vector<int> move : moves){原本用2為陣列裡，取出1維陣列
        for(auto move : moves){
            int i = move[0], j = move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A";
    }
};

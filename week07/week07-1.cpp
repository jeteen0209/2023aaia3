//(�g��@�b) week07-1.cpp �ǲߥ��� simulation ��3�g ���r�C��
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
        //for(vector<int> move : moves){�쥻��2���}�C�̡A���X1���}�C
        for(auto move : moves){
            int i = move[0], j = move[1];
            board[i][j] = 1;
            myPrintBoard(board);
        }
        return "A";
    }
};

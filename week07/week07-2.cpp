//(�g��@�b) week07-1.cpp �ǲߥ��� simulation ��3�g ���r�C��
//Leetcode 1275
//Ū��G���}�C�A�o��i,j �A��� board[i][j] = 1;
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
        if(board[0][0]==now && board[0][1]==now && board[0][2]==now) return true;//�W����
        if(board[1][0]==now && board[1][1]==now && board[1][2]==now) return true;//������
        if(board[2][0]==now && board[2][1]==now && board[2][2]==now) return true;//�W����

        if(board[0][0]==now && board[1][0]==now && board[2][0]==now) return true;//�����u
        if(board[0][1]==now && board[1][1]==now && board[2][1]==now) return true;//�����u
        if(board[0][2]==now && board[1][2]==now && board[2][2]==now) return true;//�S���u
        //�﨤�u
        if(board[0][0]==now && board[1][1]==now && board[2][2]==now) return true;//���W�k�U
        if(board[0][2]==now && board[1][1]==now && board[2][0]==now) return true;//�k�W���U
        return false;//���S���\�A�N�O����
    }//�n�ݬݡA�ֳs�u���\
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

class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        int x = 0, y = 0, dir = 0;//dir 方向 0:右 1:下 2:左 3:上
        for(char c : instructions){
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir + 3) % 4;//-1倒轉過來會有負數
            if(c=='R') dir = (dir + 1) % 4;//+1右、下、左、上
        }
        if(x==0 && y==0) return true;
        else if(dir==0) return false;
        else return true;
    }
};

class Solution {
public:
    bool winnerOfGame(string colors) {
        int a=0;
        for(int i=0;i<colors.size();i++){
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i+2]=='A') a++;
            else if(colors[i]=='B' && colors[i+1]=='B' && colors[i+2]=='B') a--;
        }
        return (a>0);
    }
};
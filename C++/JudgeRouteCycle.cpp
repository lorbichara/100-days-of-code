// Initially, there is a Robot at position (0, 0). Given a sequence of its moves, judge if this robot makes a circle, which means it moves back to the original place.
// The move sequence is represented by a string. And each move is represent by a character. The valid robot moves are R (Right), L (Left), U (Up) and D (down). 
// The output should be true or false representing whether the robot makes a circle. 

class Solution {
public:
    bool judgeCircle(string moves) {
        int countUp = 0;
        int countDown = 0;
        int countLeft = 0;
        int countRight = 0;
        
        for(int i = 0; i < moves.length(); i++) {
            if(moves[i] == 'U')
                countUp++;
            else if(moves[i] == 'D')
                countDown++;
            else if(moves[i] == 'L')
                countLeft++;
            else if(moves[i] == 'R')
                countRight++;            
        }
        
        if(countUp == countDown && countLeft == countRight)
            return true;
        else
            return false;
    }
};

// Runtime: 30 ms, beats 7.52% of submissions.
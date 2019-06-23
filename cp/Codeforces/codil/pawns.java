import java.util.*;

class Solution {
    
    Map<Integer, Integer> map = new HashMap<>();
    
    public boolean visited(int x){
        if(!map.containsKey(x)){
            map.put(x, 1);
            return false;
        }
        return true;
    }
    
    public int solution(int[] A) {
        int pawn = 0 , jumps = 0;
        while(pawn + A[pawn] < A.length && pawn > -1 && !visited(pawn)){
            pawn += A[pawn];
            ++jumps;
        }
        pawn += A[pawn];
        return pawn >= A.length || pawn < 0 ? ++jumps : -1;
    }
}
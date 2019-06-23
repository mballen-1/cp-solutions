import java.util.*;

class Solution {
    
    Map<Integer, Integer> map = new HashMap<>();
    
    public boolean firstTime(int x) {
        if(!map.containsKey(x)){
            map.put(x, 1);
            return true;    
        }
        return false;
    }
        
    public int solution(int X, int[] A) {
        int answer = -1;
        int counter = X;
        for( int i = 0 ; i< A.length ; i++){
            if(firstTime(A[i])){
                --counter;
            }
            if(counter == 0){
                answer = i;
                break;
            }
        }
        return answer;
    }
}
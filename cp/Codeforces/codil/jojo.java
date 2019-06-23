import java.util.*;
class Solution {
    
    float average = 0;
    int[] aCopy;
    
    public int solution(int[] A) {
        aCopy = new int[A.length];
        for(int x : A){
            average += x;
        }
        average /= A.length;
        System.arraycopy(A,0,aCopy,0,A.length);
        return calculate();
    }
    
    public int calculate() {
        
        int steps = 0;
        float newAverage = 0;
        
        while(Math.abs(newAverage - aCopy[0]) > 0 && steps < aCopy.length * 2 ){
            newAverage = 0;
            for(int i = 0; i< aCopy.length; ++i){
                aCopy[i] = 
                    aCopy[i] < average ?
                        ++aCopy[i] : --aCopy[i];
            }
            for(int x : aCopy){
                newAverage += x;
            }
            newAverage /= aCopy.length;
            ++steps;
        }
        return steps > 0 && steps != aCopy.length * 2 ? steps : -1;
    }
}
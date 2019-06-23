import java.util.*;
import java.util.stream.Collectors;

class Solution {
    int max = 0;
    public int[] solution(int N, int[] A) {
        List<Integer> track = new ArrayList<>(A.length);
        for(int i = 0; i< N; i++){
            track.add(0);
        }
        for(int x = 0; x < A.length; ++x){
            if(A[x] <= N && A[x] > 0){
                int current = track.get(A[x] -1 );
                track.set(A[x] - 1, ++current);
                max = Math.max(max, track.get(A[x] - 1));
            }
            else {
                if(A[x] == N + 1){
                    final int mx = max;
                    List<Integer> collect1 = 
                        track.stream().map(e -> mx)
                            .collect(Collectors.toList());
                    track = collect1;
                }   
            }
        }
        int[] answer = track.stream().mapToInt(i->i).toArray();
        return answer;
    }   
}
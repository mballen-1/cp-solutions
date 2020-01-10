import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class A {
    public static void magic(String x){
        char[] ans = new char[x.length()];
        for(int i = 0; i< x.length();++i){
            ans[i] = x.charAt(i);
        }
        for(int i = 0; i< ans.length;++i){
            if( i == 0 ){
                if(x.length() == 1){
                    ans[i] = 'a';
                } else {
                    if(x.charAt(i) == '?'){
                        switch(x.charAt(i+1)){
                            case 'a':
                                ans[i] = 'b';
                            break;
                            case 'b':
                                ans[i] = 'a';
                            break;
                            case 'c':
                                ans[i] = 'b';
                            break;
                            case '?':
                                ans[i] = 'a';
                            break;
                        }
                    } else {
                        ans[i] = x.charAt(i);
                    }
                }
            } else {
                if(i == x.length() -1){
                    if(x.charAt(i) == '?'){
                        switch(ans[i-1]){
                            case 'a':
                                ans[i] = 'b';
                            break;
                            case 'b':
                                ans[i] = 'a';
                            break;
                            case 'c':
                                ans[i] = 'b';
                            break;
                        }
                    }else {
                        ans[i] = x.charAt(i);
                    }
                }
                else {
                    if(x.charAt(i) == '?'){
                        switch(ans[i-1]){
                            case 'a':
                                switch(x.charAt(i+1)){
                                    case 'a':
                                        ans[i] = 'b';
                                    break;
                                    case 'b':
                                        ans[i] = 'c';
                                    break;
                                    case 'c':
                                        ans[i] = 'b';
                                    break;
                                    case '?':
                                        ans[i] = 'b';
                                    break;
                                }
                            break;
                            case 'b':
                                switch(x.charAt(i+1)){
                                    case 'a':
                                        ans[i] = 'c';
                                    break;
                                    case 'b':
                                        ans[i] = 'a';
                                    break;
                                    case 'c':
                                        ans[i] = 'a';
                                    break;
                                    case '?':
                                        ans[i] = 'a';
                                    break;
                                }
                            break;
                            case 'c':
                                switch(x.charAt(i+1)){
                                    case 'a':
                                        ans[i] = 'b';
                                    break;
                                    case 'b':
                                        ans[i] = 'a';
                                    break;
                                    case 'c':
                                        ans[i] = 'b';
                                    break;
                                    case '?':
                                        ans[i] = 'b';
                                    break;
                                }
                            break;
                        }
                    }else{
                        ans[i] = x.charAt(i);
                    }
                }
            }
            
        }
        for(int i= 1; i< ans.length ;++i){
            if(i < ans.length -1){
                if(ans[i] == ans[i-1] || ans[i] == ans[i+1]){
                    System.out.println(-1);
                    return;
                }
            } else {
                if(ans[i] == ans[i-1]){
                    System.out.println(-1);
                    return;
                }
            }
            
        }
        System.out.println(ans);
    }    
    public static void main(String args[]){
        Scanner lec = new Scanner(System.in); 
        int cases = lec.nextInt();
        for(int i = 0; i< cases; ++i){
            String x = lec.next();
            magic(x);
        }
        
    }
}
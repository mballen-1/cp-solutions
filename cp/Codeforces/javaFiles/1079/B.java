import java.util.*;
 
public class B {
 
    public static void fillAndPrintMatrix(int c, String name, int rows) {
        int cols = (name.length() + c) / rows;
        char m[][] = new char[rows][cols];
        int aCount = 0, nCount = 0;
        int ex = c % rows;
        int byRow;
        if(c < rows){
            for(int i = 0; i < c ; ++i ){
                for(int j = 0; j < 1; ++j){
                    if(aCount < c) {
                        m[i][j] = '*';
                        ++aCount;
                    }
                }
            }
            
        } else {
            if(ex > 0){
                boolean still = aCount < c;
                byRow = c / rows;
                for(int i = 0; i < rows; ++i ){
                    for(int j = 0; j < byRow; ++j){
                        if(still){
                            m[i][j] = '*';
                            ++aCount;
                        }
                    }
                }
                for(int i = 0; i < ex; ++i ){
                    for(int j = 0; j< rows; ++j){
                        if(still && m[i][j] != '*'){
                            m[i][j] = '*';
                            ++aCount;
                        }
                    }
                }
            } else {
                for(int i = 0; i < rows; ++i ){
                    for(int j = 0; j < c/rows; ++j){
                        if(aCount < c){
                            m[i][j] = '*';
                            ++aCount;
                        }
                    }
                }
            }
        }

        System.out.println(rows + " " + cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (nCount < name.length() && m[i][j] != '*') {
                    m[i][j] = name.charAt(nCount);
                    ++nCount;
                }
            }
        }
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                System.out.print(m[i][j]);
            }
            System.out.println("");
        }
    }
 
    public static void find(String name) {
 
        int l = name.length();
        int rows = 2;
        if(Math.ceil((double)l/2) > 20){
            ++rows;
        }
        if(Math.ceil((double)l/3) > 20){
            ++rows;
        }
        if(Math.ceil((double)l/4) > 20){
            ++rows;
        }
        int c = 0;
        int copyL = l;
        while(copyL % rows != 0){
            ++c; ++copyL;
        }
        fillAndPrintMatrix(c, name, rows);
    }
 
    public static void main(String args[]) {
        Scanner lec = new Scanner(System.in);
        String name = lec.nextLine();
        if (name.length() <= 20) {
            System.out.println(1 + " " + name.length());
            System.out.println(name);
        } else {
            find(name);
        }
        lec.close();
    }
}
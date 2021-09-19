import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Scanner;
import java.util.StringTokenizer;
import java.util.logging.Level;
import java.util.logging.Logger;

public class Main {
    public static void main(String[] args) {
        FastReader in = new FastReader();
        int tt = in.nextInt();
        for (int qq = 1; qq <= tt; qq++) {
            int n = in.nextInt();
            String s = in.next();
            int l = -1;
            int r = -1;
            for (int i = 0; i + 1 < n; i++) {
                String str = String.valueOf(s.charAt(i)) + String.valueOf(s.charAt(i + 1));
                if (str.equals("ab") || str.equals("ba")) {
                    l = i + 1;
                    r = i + 2;
                    break;
                }
            }
            System.out.println(l + " " + r);
        }
    }
    
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
        
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        
        int nextInt() {
            return Integer.parseInt(next());
        }
        
        long nextLong() {
            return Long.parseLong(next());
        }
        
        double nextDouble() {
            return Double.parseDouble(next());
        }
        
        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
}

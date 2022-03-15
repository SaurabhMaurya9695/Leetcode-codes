// { Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t>0)
        {
            int N = sc.nextInt();
            String[] dictionary = new String[N];
            for(int i=0;i<N;i++)
            {
                dictionary[i] = sc.next();
            }
            
            int R = Integer.parseInt(sc.next());
            int C = Integer.parseInt(sc.next());
            
            char board[][] = new char[R][C];
            for(int i=0;i<R;i++)
            {
                for(int j=0;j<C;j++)
                {
                    board[i][j] = sc.next().charAt(0);
                }
            }
            
            Solution obj = new Solution();
            String[] ans = obj.wordBoggle(board, dictionary);
            
            if(ans.length == 0) System.out.println("-1");
            else
            {
                Arrays.sort(ans);
                for(int i=0;i<ans.length;i++)
                {
                    System.out.print(ans[i] + " ");
                }
                System.out.println();
            }
            
            t--;
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    static int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
    static int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
    
    private boolean dfs(int ind, int x, int y, char board[][], boolean visited[][], String word, int n, int m)
    {
        if(ind==word.length()) return true;
        
        if(x<0 || y<0 || x>=n || y>=m || visited[x][y]==true || board[x][y] != word.charAt(ind)) return false;
        
        visited[x][y] = true;
        
        for(int i=0; i<8; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(dfs(ind+1, nx, ny, board, visited, word, n, m)) return true;
        }
        
        visited[x][y] = false;
        
        return false;
        
    }
    
    private boolean searchWord(char board[][], String word, int n, int m)
    {
        boolean visited[][] = new boolean[n][m];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==word.charAt(0))
                {
                    if(dfs(0, i, j, board, visited, word, n, m))
                    {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
    
    public String[] wordBoggle(char board[][], String[] dictionary)
    {
        
        int n = board.length;
        int m = board[0].length;
        
        ArrayList<String> ans = new ArrayList<>();
        
        for(String word : dictionary)
        {
            if(searchWord(board, word, n, m)) ans.add(word);
        }
        
        String res[] = new String[ans.size()];
        
        int n_words = ans.size();
        
        for(int i=0; i<n_words; i++)
        {
            res[i] = ans.get(i);
        }
        
        return res;
        
        
    }
}
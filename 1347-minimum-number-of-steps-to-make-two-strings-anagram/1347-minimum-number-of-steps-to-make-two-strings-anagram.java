class Solution {
    public int minSteps(String s, String t) {
        int [] freq_S = new int [26];
        int [] freq_T = new int [26];
        
        for(int i = 0 ; i < s.length() ; i ++){
            freq_S[s.charAt(i) - 'a'] ++;
            freq_T[t.charAt(i) - 'a'] ++;
        }
        
        int cnt = 0 ;
        for(int i = 0 ; i < 26 ; i ++){
            if(freq_S[i] > freq_T[i]){
                cnt += Math.abs(freq_S[i] - freq_T[i]);
            }
        }
        
        return cnt ; 
    }
}
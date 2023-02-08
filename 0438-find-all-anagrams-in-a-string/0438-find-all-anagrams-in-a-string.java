class Solution {
    public List<Integer> findAnagrams(String s2, String s1) {
        int n = s1.length() ;
        int m = s2.length() ;
        List<Integer> ans = new ArrayList<>() ;
        if(n > m) {
            return ans ;
        }
        
        //we have to create map for s1 ;
       HashMap<Character , Integer > mp = new HashMap<>() ; 
        for(int i = 0 ; i < n ; i ++)
        {
            char ch = s1.charAt(i);
            mp.put(ch , mp.getOrDefault(ch , 0)  + 1 );
        }
        
        int size = mp.size() ;  
        int k = n ;  // window size
        int i = 0 , j = 0; 
        while(j < m)
        {
            //ca
            char ch = s2.charAt(j);
            if(mp.containsKey(ch)) // means we found jth char in map then we have to decrese the frew
            {
                mp.put(ch , mp.get(ch ) - 1) ;
                if(mp.get(ch ) == 0)  // if freq is zero 
                {
                    size -- ;  // mp size dec by 1 
                }
            }
            if(j - i  + 1 != k )
            {
                j ++ ;
            }
            else if(j - i + 1 == k)
            {
                if(size == 0) { // all the elements we found in map 
                    ans.add(i);
                } 
                
                char ch2 = s2.charAt(i);
                if(mp.containsKey(ch2)) // means we found jth char in map then we have to decrese the frew
                {
                    mp.put(ch2 , mp.get(ch2 ) + 1) ;
                    if(mp.get(ch2 ) == 1)  // if freq is zero 
                    {
                        size ++ ;  // mp size dec by 1 
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
}
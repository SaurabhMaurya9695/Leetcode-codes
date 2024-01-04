class Solution {
    public int minOperations(int[] nums) {
        Map<Integer,Integer> mp = new HashMap<>() ;
        for(int x : nums){
            mp.put(x , mp.getOrDefault(x, 0) + 1);
        }
        
        int ans = 0 ;
            
        for(Map.Entry<Integer, Integer> entry : mp.entrySet()){
            int s = entry.getValue();
            if(s == 1){
                return -1;
            }
            else {
                if(s % 3 == 0){
                    ans += (s / 3);
                }else{
                    while(s >= 0){
                        s = s - 3;
                        ans ++ ;
                        if(s < 0){
                            s += 3;
                            ans --;
                            break;
                        }
                    }
                    if(s == 1){
                        s += 3;
                        ans --;
                    }
                    ans += (s / 2);
                }
            }
        }
        
        return ans ;
    }
}
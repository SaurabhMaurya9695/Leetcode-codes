class Solution {
    public List<Integer> findDuplicates(int[] nums) {
       // create a hashmap
        HashMap<Integer , Integer> mp = new HashMap() ;
        
        //we need some DS to store ans ;
        ArrayList<Integer > lst = new ArrayList() ;
        for(int i = 0 ; i< nums.length ; i ++)
        {
            if(mp.containsKey(nums[i]))
            {
                mp.put(nums[i] , mp.get(nums[i]) + 1) ;
                lst.add(nums[i]);
            }
            else{
                mp.put(nums[i] , 1) ;
            }
        }
        return lst;
        
        
        
    }
}
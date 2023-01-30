class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer ,  Integer > mp = new HashMap<>() ;
        for(int i = 0 ; i < nums.length ; i ++)
        {
            mp.put(nums[i] , i);
        }
        
        int [] arr = new int[2];
        for(int i = 0; i < nums.length ; i ++)
        {
            if(mp.containsKey(target - nums[i]))
            {
                if(i != mp.get(target - nums[i])){
                    arr[0] = i;
                    arr[1] = mp.get(target - nums[i]) ;
                    break;
                }
            }
        }
        return arr;
    }
}
class Solution {
    public int countKDifference(int[] arr, int k) {
        int cnt = 0 ;
        HashMap<Integer , Integer > mp = new HashMap<>();
        for(int i = 0 ; i < arr.length ; i ++)
        {
            if(mp.containsKey(arr[i] + k))
            {
                cnt += mp.get(arr[i] + k) ;
            }
            if(mp.containsKey(arr[i] - k))
            {
                cnt += mp.get(arr[i] - k) ;
            }
            mp.put(arr[i] , mp.getOrDefault(arr[i] , 0) + 1) ;
        }
        return cnt ;
    }
}
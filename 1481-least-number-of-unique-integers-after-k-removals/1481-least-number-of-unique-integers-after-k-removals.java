class Solution {
    public int findLeastNumOfUniqueInts(int[] arr, int k) {
        HashMap<Integer, Integer> mp = new HashMap<>(); ;
        for(Integer x : arr) mp.put(x , mp.getOrDefault(x , 0) + 1);
        
        List<Integer> vp = new ArrayList<>() ;
        for(Map.Entry<Integer,Integer> x : mp.entrySet() ){
            vp.add(x.getValue()) ;
        }
        
        Collections.sort(vp); 
        
        int count = 0;
        for (int i = 0 ; i < vp.size() ; i ++) {
            if (k >= vp.get(i)) {
                k -= vp.get(i);
                count++;
            } else {
                break;
            }
        }
        
        return vp.size() - count;
    }
}
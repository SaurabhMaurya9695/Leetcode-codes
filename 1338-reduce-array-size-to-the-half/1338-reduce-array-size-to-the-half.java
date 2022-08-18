class Solution {
    public int minSetSize(int[] arr) {
        Map<Integer, Integer> mp = new HashMap<>();
        PriorityQueue<Integer> pq = new PriorityQueue<>(Comparator.reverseOrder());
        for (int num : arr) mp.put(num, mp.getOrDefault(num, 0) + 1);
        for (int value : mp.values()) pq.offer(value);

        int size = arr.length; int result = 0;
        while (size > arr.length / 2) {
            size -= pq.poll();
            result++;
        }

        return result;
    }
}
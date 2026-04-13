// Java Code to find the minimum distance between target and start in an array
class Solution {
    public int getMinDistance(int[] nums, int target, int start) {
        int n = nums.length;
        int minDis = Integer.MAX_VALUE; // MAX_INT
        for (int i = 0; i < n; i++) {
            if(nums[i] == target){
                int checkDis = Math.abs(i - start); // abs

                if(checkDis < minDis){
                    minDis = checkDis;
                }
            }
        }
        return minDis;
    }
}
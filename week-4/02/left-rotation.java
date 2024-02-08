
    public static List<Integer> rotateLeft(int d, List<Integer> arr) {
        int n = arr.size();
        int mod = d % n;
        List<Integer> ans = new ArrayList<>();
        
        for (int i = 0; i < n; i++) {
            int c = arr.get((mod + i) % n);
            ans.add(c);
        }
        
        return ans;
    }

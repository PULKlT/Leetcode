class RandomizedSet {

    ArrayList<Integer> a;
    public RandomizedSet() {
        a = new ArrayList<Integer>();        
    }
    
    public boolean insert(int val) {
        if(a.contains(val))
            return false;
        else
        {
            a.add(val);
            return true;
        }        
    }
    
    public boolean remove(int val) {
        if(a.contains(val))
        {
            a.remove(Integer.valueOf(val));
            return true;
        }
        else
        {
            return false;            
        }
    }
    
    public int getRandom() {
        Random r = new Random();
        int x = r.nextInt(a.size());
        return a.get(x);
    }
}

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * boolean param_1 = obj.insert(val);
 * boolean param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
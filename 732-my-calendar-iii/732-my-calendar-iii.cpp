class MyCalendarThree {
public:
    // use a map as a differential array
    map<int, int> map;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        map[start]++;
        map[end]--;
        int curr = 0;
        int max = 0;
        for (auto& it : map) {
            curr += it.second;
            max = std::max(curr, max);
        }
        return max;
    }
};
class ParkingSystem {
public:
    vector<int > one ;
    vector<int> two ;
    vector<int> three ;
    int x = 0 ;
    int y = 0 ;
    int z = 0 ;
    ParkingSystem(int big, int medium, int small) {
        one.resize (big) ;
        two.resize (medium) ;
        three.resize (small) ;
        this-> x = big;
        this-> y = medium;
        this-> z = small;
    }
    
    bool addCar(int carType) {
        if(carType == 1){
           x-- ;
            if( x >= 0){
                return true;
            }
            else{
                return false;
            }
        }
        else if(carType == 2){
            y-- ;
            if( y >= 0){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            z-- ;
            if( z >= 0){
                return true;
            }
            else{
                return false;
            }
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */
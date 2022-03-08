class ParkingSystem {
    private int[] availableSlots;

    public ParkingSystem(int big, int medium, int small) {
        availableSlots = new int[]{big, medium, small};
    }
    
    public boolean addCar(int carType) {
        return availableSlots[carType - 1]-- > 0;
    }
}
#ifndef AFG4_ROLLERSKATES_H
#define AFG4_ROLLERSKATES_H
class RollerSkates {
    string color;
    int size;
    string owner;
    string manufacturer;
public:
    void changeOwner(string _newOwner);
    void changeColor(string _newColor);
    void changeSize(int _newSize);
    void rollAround(int _speed);
};
#endif //AFG4_ROLLERSKATES_H


class Student {
    private:
        string name;
        int roll_number;
    public:
        void setName(string name) { this->name = name; }
        string getName() const { return name; }
        void setRollNumber(int roll_number) { this->roll_number = roll_number; }
        int getRollNumber() const { return roll_number; }
};
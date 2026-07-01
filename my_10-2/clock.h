#include "clock_time.h"

class Clock{
    protected:
        ClockTime _clockTime;
        double _driftPerSecond;
        double _totalDrift;

    public:
        Clock(int hour, int minute, int second, double driftPerSecond);
        void reset();
        void tick();
        virtual void displayTime() = 0;
};

class NaturalClock: public Clock{
    virtual void displayTime();
};

class SundialClock: public NaturalClock{
    virtual void displayTime();

};

class MechanicalClock: public Clock{
    virtual void displayTime();

};

class CuckooClock: public MechanicalClock{
    virtual void displayTime();

};

class GrandFatherClock: public MechanicalClock{
    virtual void displayTime();

};

class DigitalClock: public Clock{
    virtual void displayTime();

};

class WristClock: public DigitalClock{
    virtual void displayTime();

};

class QuantumClock: public Clock{
    virtual void displayTime();

};

class AtomicClock: public QuantumClock{
    virtual void displayTime();

};


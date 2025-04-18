#include<iostream>
#include<chrono>
#include<thread>

using namespace std;
using namespace std::chrono;
using namespace std::chrono_literals;

enum class TrafficLightState{
    RED,
    GREEN,
    YELLOW
};

void printState(TrafficLightState state)
{
    switch (state)
    {
    case TrafficLightState::RED:
        cout << "Red Light - Stop" << endl;
        break;
    
    case TrafficLightState::GREEN:
        cout << "Green Light - Go" << endl;
        break;
    
    case TrafficLightState::YELLOW:
        cout << "Yellow Light - Slow Down" << endl;
        break;
    
    default:
        break;
    }
}

TrafficLightState getNextState (TrafficLightState current)
{
    switch (current)
    {
    case TrafficLightState::RED:
        return TrafficLightState::GREEN;
        break;
    
    case TrafficLightState::GREEN:
        return TrafficLightState::YELLOW;
        break;

    case TrafficLightState::YELLOW:
        return TrafficLightState::RED;
        break;    
    default:
        break;
    }

    return TrafficLightState::GREEN; // Default state
}

int main()
{
    TrafficLightState currentState = TrafficLightState::RED;

    while (true)
    {
        printState(currentState);
        // Delay for the two second
        this_thread::sleep_for(seconds(2));

        currentState = getNextState(currentState);
    }

    return 0;
}
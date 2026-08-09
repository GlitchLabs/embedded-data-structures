enum class SystemState 
{
    IDLE,
    ARMED,
    LAUNCHED,
    TRACKING,
    TERMINAL_GUIDANCE,
    DETONATE

};

class StateMachine{
public:
    StateMachine() : currentState(SystemState::IDLE), m_targetAcquired(false), m_launchAuthorized(false), m_thrusterIgnited(false)
    {
    }

    void transitionState(){
        switch(currentState){
            case SystemState::IDLE:
                if(m_targetAcquired && m_launchAuthorized){
                    currentState = SystemState::ARMED;
                }
                break;
            case SystemState::ARMED:
                if(m_thrusterIgnited){
                    currentState = SystemState::LAUNCHED;
                }
                break;
            case SystemState::LAUNCHED:
                break;
            case SystemState::TRACKING:
                break;
            case SystemState::TERMINAL_GUIDANCE:
                break;
            case SystemState::DETONATE:
                break;
        }
    }
    void setTargetAcquired(bool set){m_targetAcquired = set;}
    void setLaunchAuthorized(bool set){m_launchAuthorized = set;}
    void setThrusterIgnited(bool set){m_thrusterIgnited = set;}

    SystemState getState()const {return currentState;}

    const char* systemStatePrinter(SystemState sState)const{
        const char* state = "";

        switch(sState){
            case SystemState::IDLE:
                state = "IDLE";
                return state;
            case SystemState::ARMED:
                state = "ARMED";
                return state;
            case SystemState::LAUNCHED:
                state = "LAUNCHED";
                return state;
            case SystemState::TRACKING:
                state = "TRACKING";
                return state;

            case SystemState::TERMINAL_GUIDANCE:
                state = "TERMINAL_GUIDANCE";
                return state;

            case SystemState::DETONATE:
                state = "DETONATE";
                return state;

            default:
                state = "Error";
                return state;

        }
    }
private:
    SystemState currentState;
    bool m_targetAcquired;
    bool m_launchAuthorized;
    bool m_thrusterIgnited;
};

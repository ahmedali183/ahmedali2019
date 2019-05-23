//create arm components
struct finger //first create finger before you make a pointer to it
{
    int data;
    int degree;
};

struct wrist
{
    int data;
    int degree;
    struct finger *connect_to_finger; //making pointer to finger which i defined before
                                      //pointer from type (finger)
};

struct elbow
{
    int data;
    int degree;
    struct wrist *connect_to_wrist;  //pointer from type (wrist)
};

struct shoulder
{
    int data;
    int degree;
    struct elbow *connect_to_elbow;
};

//create leg components
struct foot
{
    int data;
    int degree;
};

struct knee
{
    int data;
    int degree;
    struct foot *connect_to_foot;
};

struct waist_end
{
    int data;
    int degree;
    struct knee *connect_to_knee;
};


//create Arm and make shoulder,elbow,wrist,finger part in it
struct arm
{
    struct shoulder s; //make (shoulder struct) part in (arm struct)
    struct elbow e;
    struct wrist w;
    struct finger f;
}right_arm,left_arm; //global structure known through all code, doesn't require to be defined again

//create Leg and make waist_end,knee,foot part in it
struct leg
{
    struct waist_end w_e; //make (waist_end struct) part in (leg struct)
    struct knee k;
    struct foot f;
}right_leg,left_leg; //global structure




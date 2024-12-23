class Character {
private:
float speed_;

public:
static float max_speed_;

//Default constructor
Character();

void Accelerate();

void Break();

float auto_speed() const;

//Destructor
~Character() ;
};
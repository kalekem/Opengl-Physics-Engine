#include "gameobject.h"

class Sphereobject : public Gameobject{

public:
	
	Sphereobject();
	~Sphereobject();


	void draw();
	bool intersect();

};
#include "planeobject.h"

//Constructor
Planeobject::Planeobject(){

	scale = (float *)malloc(sizeof(GLfloat)*3);

	scale[0] = 10;
	scale[1] = .1;
	scale[2] = 20;

	float acceleration[3] = {0,0,0};
	a.set(acceleration);
}

//Deconstructor
Planeobject::~Planeobject(){

}


void Planeobject::setN(float* n){
	Vectorobject normal_vector = Vectorobject(n);
	//Save it
	normal = normal_vector;
}

Vectorobject Planeobject::getN(){
	return normal;
}

void Planeobject::draw(){

	//Add a spher0
    glPushMatrix();
    	glRotatef(45,1,0,0);
    	glScalef(scale[0],scale[1],scale[2]);	//Scale it from a cube into a plane (size)
        glTranslatef(p[0],p[1],p[2]);			//Move it to where it needs to be
        glutSolidCube(1);						// Make the cube (size 1);
    glPopMatrix(); 
}


bool Planeobject::intersect(){
}
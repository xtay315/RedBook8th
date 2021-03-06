/*
* Ex01.h
*
* Created on: Dec 31, 2013
* Author: Andrew Zhabura
*/

#ifndef Ex01_h
#define Ex01_h

#include "WinApi/OGLWindow.h"
#include <GL/glLoader.h>

class Ex01 : public OGLWindow
{
private:
	enum VAO_IDs { Triangles, NumVAOs };
	enum Buffer_IDs { ArrayBuffer, NumBuffers };
	enum Attrib_IDs { vPosition = 0 };

	GLuint  VAOs[NumVAOs];
	GLuint  Buffers[NumBuffers];

	static const GLuint  NumVertices = 6;
public:
	Ex01();
	void InitGL();
private:
	void Display();
};

#endif // Ex01_h
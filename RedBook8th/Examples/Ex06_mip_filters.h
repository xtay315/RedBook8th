/*
* Ex06_mip_filters.h
*
* Created on: Feb 16, 2014
* Author: Andrew Zhabura
*/

#ifndef Ex06_mip_filters_h
#define Ex06_mip_filters_h

#include "WinApi/OGLWindow.h"
#include <GL/glLoader.h>

class Ex06_mip_filters : public OGLWindow
{
public:
	Ex06_mip_filters();
	~Ex06_mip_filters();
	void InitGL();
	virtual void keyboard( unsigned char key, int x, int y );
private:
	void Display();

	GLuint mipmap_prog;
	GLuint vao;

	GLuint vbo;
	GLuint element_buffer;

	GLuint tex;
	GLint tc_rotate_loc;
};

#endif // Ex06_mip_filters_h
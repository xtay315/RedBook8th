/*
* Ex08_13.h
*
* Created on: Mar 17, 2014
* Author: Andrew Zhabura
*/

#ifndef Ex08_13_h
#define Ex08_13_h

#include "WinApi/OGLWindow.h"
#include <GL/glLoader.h>
#include "Auxiliary/vbm.h"

class Ex08_13 : public OGLWindow
{
public:
	Ex08_13();
	~Ex08_13();
	void InitGL();
	virtual void keyboard( unsigned char key, int x, int y );
private:
	void Display();

	GLuint object_prog;

	GLint object_mat_mv_loc;
	GLint object_mat_mvp_loc;
	GLint MortarPct_loc;

	GLuint vao;
	GLuint quad_vbo;
};

#endif // Ex08_13_h
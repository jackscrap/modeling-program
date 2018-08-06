#pragma once

#include <string>
#include <vector>

class Prop {
	public:
		Prop(std::string name);
		~Prop();

		/* std::vector<std::vector<GLfloat>> vtx; */
		/* std::vector<GLfloat> vtx; */
		GLfloat vtx[8 * 3];

		void draw();
};

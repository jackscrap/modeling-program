#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

#include <GL/glew.h>

#include "prop.h"

Prop::Prop(std::string name) {
	std::string path = ("res/" + name + ".obj").c_str();

	std::ifstream f;

	f.open(path);

	std::string l;

	if (f.is_open()) {
		/* int lineNo = 0; */

		int c = 0;
		while (f.good()) {
			getline(f, l);

			if (l[0] == 'v' && l[1] == ' ') {
				int i = 0;

				std::istringstream iss(l);

				/* std::vector<GLfloat> tmp; */

				for (std::string tok; iss >> tok;) {
					if (i != 0) {
						std::string::size_type size;
						GLfloat val = stof(tok, &size);

						/* (*this).vtx.push_back(val); */

						/* tmp.push_back(val); */

						(*this).vtx[c] = val;
					}

					i++;
				}
			}

			/* lineNo++; */

			c++;
		}
	} else {
		std::cerr << "Unable to load obj: " << name << std::endl;
	}
}

Prop::~Prop() {
}

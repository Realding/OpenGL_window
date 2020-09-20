#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Shader
{
public:
	unsigned int ID;
	Shader(string vspath, string fspath);

	void use();

	void setBool(const std::string& name, bool value) const;

	void setInt(const std::string& name, int value) const;

	void setFloat(const std::string& name, float value) const;

	void setVect3f(const std::string& name, float x, float y, float z) const;


private:
	void checkCompileErrors(unsigned int shader, string type);
};


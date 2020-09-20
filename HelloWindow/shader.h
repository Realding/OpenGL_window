#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

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

	void setMat4(const std::string& name, glm::mat4 value);

private:
	void checkCompileErrors(unsigned int shader, string type);
};


#include <GLFW/glfw3.h>

#include <iostream>
#include <string>

#include "include/process_input.h"

using namespace std;

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

const char *title = "Hero is Running";
std::string error_text_glfw_init = "Cannot initialize GLFW";

void process_keyboard_input(GLFWwindow *window);

int main(void) {
	GLFWwindow *window;

	/* Initialize the GLFW */
	if (!glfwInit()) {
		cout << error_text_glfw_init << endl;
		return -1;
	}

	/* Create a windowed mode window and its OpenGL context */
	window =
	    glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, title, NULL, NULL);
	if (!window) {
		cout << "Cannot create a window" << endl;
		glfwTerminate();
		return -1;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	ProcessInput *process_input = new ProcessInput();

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window)) {
		process_input->keyboard(window);

		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);

		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}

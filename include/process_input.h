#ifndef PROCESS_INPUT
#define PROCESS_INPUT

class ProcessInput {
       public:
	ProcessInput(){};
	~ProcessInput(){};

	void keyboard(GLFWwindow *window) {
		if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
			glfwSetWindowShouldClose(window, true);
	}
};

#endif

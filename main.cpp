#include "include/glad/glad.h"

#include <GLFW/glfw3.h>
#include <GL/glcorearb.h>
#include <iostream>
#include <string>

#include "include/glm/glm.hpp"
#include "include/glm/gtc/matrix_transform.hpp"
#include "include/glm/gtc/type_ptr.hpp"

#include "include/shader.h"

#include "include/loaders/texture_loader.h"
#include "include/callbacks.h"
#include "include/input_processing.h"

#include "include/glfw_initialize.h"

#include "include/scores/score.h"
#include "include/enemy/enemy.h"


using namespace std;



// timing
float deltaTime = 0.0f;
float lastFrame = 0.0f;

const std::string error_text_glad_initialize = "Failed to initialize GLAD.";

Callbacks *callback = new Callbacks();
InputProcessing *input = new InputProcessing();

int main(void) {
	
	//GLFW Initialization
	GLFWInitialize *glfwInit = new GLFWInitialize("Hero is Running", callback);

	// glad: load all OpenGL function pointers
	// ---------------------------------------
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
		std::cout << error_text_glad_initialize << std::endl;
		return -1;
	}

	// configure global opengl state
	// -----------------------------
	glEnable(GL_DEPTH_TEST);

	// build and compile our shader zprogram
	// ------------------------------------
	Shader shader("shaders/vertex.glsl",
			      "shaders/fragment.glsl");

	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------
	float vertices[] = {
	    -3.0f, -3.0f, 0.0f, 0.0f, 0.0f,
	     3.0f, -3.0f, 0.0f, 1.0f, 0.0f,
	     3.0f,  3.0f, 0.0f, 1.0f, 1.0f,
	     
	    -3.0f, -3.0f, 0.0f, 0.0f, 0.0f,
	     3.0f,  3.0f, 0.0f, 1.0f, 1.0f,
	    -3.0f,  3.0f, 0.0f, 0.0f, 1.0f};
	// first, configure the cube's VAO (and VBO)
	unsigned int planeVBO, planeVAO;
	glGenVertexArrays(1, &planeVAO);
	glGenBuffers(1, &planeVBO);
	
	glBindVertexArray(planeVAO);
	
	glBindBuffer(GL_ARRAY_BUFFER, planeVBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices,
		     GL_STATIC_DRAW);

	// position attribute
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float),
			      (void *)0);
	glEnableVertexAttribArray(0);
	// texture attribute
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float),
			      (void *)(3 * sizeof(float)));
	glEnableVertexAttribArray(1);

	// Load Textures
	stbi_set_flip_vertically_on_load(true);
	
	unsigned int map;
	TextureLoader tl1("images/2D_topdown.png", map);
	shader.setInt("map_2d", 0);
	shader.use();
	
	//Load level
	
	//Score object	
	Score *score = new Score(0);
	std::cout << "Initial score: " << score->getInitPoints() << std::endl;
	
	//Initialize an enemy
	Enemy *enemy = new Enemy(0, "Buggy", 1, 1);
	// render loop
	// -----------
	while (!glfwWindowShouldClose(glfwInit->getWindow())) {
		// per-frame time logic
		// --------------------
		float currentFrame = glfwGetTime();
		deltaTime = currentFrame - lastFrame;
		lastFrame = currentFrame;

		// input
		// -----
		input->keyboard_input(glfwInit->getWindow(), deltaTime);

		// render
		// ------
		glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		
		
		// be sure to activate shader when setting uniforms/drawing
		shader.use();

		// world transformation
		glBindVertexArray(planeVAO);
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_2D, map);
		glDrawArrays(GL_TRIANGLES, 0, 6);

		// glfw: swap buffers and poll IO events (keys pressed/released,
		// mouse moved etc.)
		// -------------------------------------------------------------------------------
		glfwSwapBuffers(glfwInit->getWindow());
		glfwPollEvents();
	}

	// optional: de-allocate all resources once they've outlived their
	// purpose:
	// ------------------------------------------------------------------------
	glDeleteVertexArrays(1, &planeVAO);
	glDeleteBuffers(1, &planeVBO);

	// glfw: terminate, clearing all previously allocated GLFW resources.
	// ------------------------------------------------------------------
	glfwTerminate();
	return 0;
}

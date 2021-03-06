#include <GL/glew.h>
#include <GLFW/glfw3.h>

void renderScene();

int main(int argc, char** argv) {

	glfwInit();

	GLFWwindow* window = glfwCreateWindow(800, 600, " Hello OpenGL ", NULL, NULL);
	glfwMakeContextCurrent(window);
	glewInit();

	while (!glfwWindowShouldClose(window)) {

		// Render our scene

		renderScene();
		glfwSwapBuffers(window);
		glfwPollEvents();

	}

	glfwTerminate();

	return 0;

}

void renderScene() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0, 1.0, 0.0, 1.0); // clear yellow

	// Draw game objects here
}
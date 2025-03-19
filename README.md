# Exception Handling - Example Project for Process Automation Engineering students
This repository contains an example project that I used to showcase exception handling in C++ during my pedagogical internship. The students can take the codes and copy them into their coding environments to try the code out and play around with it.

## How do I run this?
I've made this repository with a development container using Docker-Compose. If the reader is open to learning this technology, here's a quick introduction on how to use this repository:
1. Install Docker on your system (may need to do some research on this first) (WSL works)
2. Run Docker Engine (the engine needs to be active)
3. Clone the repository to a local folder (first research how to set up Git on your computer)
4. Open the project directory and run `docker-compose up -d` (this should start the development container)
5. I'm using VSCode, with extensions highlighted in the relevant file in `.vscode` folder. You should use VSCode too.
6. Once you enable "Dev Containers" extension, you should be able to attach to the container.

And there you go - you have your environment that is completely isolated from your operating system. On the left side, open the menu you see down below, and click the run icon. If all done correctly, your application should build and you should see its output in the output terminal.
![image](https://github.com/user-attachments/assets/d18de434-48a2-4a61-8843-ac73c0a7f7e8)

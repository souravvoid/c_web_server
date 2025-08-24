
---

# 🖥️ C Web Server Project

This is a small **HTTP web server written in C**.  
I built it as a learning project to understand **sockets, networking, and modular programming** in C.  

It’s a simple server that runs locally, listens on port 8080, and sends back a "Hello, World!" HTML response when you connect in a browser or with `curl`.

---

## 📂 Folder Structure

c-web-server/ │── src/              # main server source code │   ├── main.c │   ├── server.c │   ├── server.h │   ├── http.c │   ├── http.h │── tests/            # unit tests │   ├── test_http.c │── docs/             # documentation files │   ├── design.md │   ├── usage.md │── .gitignore │── Makefile │── README.md │── LICENSE

---

## ▶️ How to Run

1. **Clone the repo**
   ```bash
   git clone https://github.com/sourav_void/c-web-server.git
   cd c-web-server

2. Build the project

make


3. Start the server

./webserver


4. Test in browser or curl

curl http://localhost:8080



You should see:

<html><body><h1>Hello, World!</h1></body></html>


---

🧪 Testing

I added a very simple unit test example (for now). Run it with:

gcc tests/test_http.c src/http.c -o test_http
./test_http


---

📖 What I Learned

How to create and bind sockets in C

Accepting client connections

Sending a basic HTTP response

Organizing code into modules (server.c and http.c)

Writing a simple Makefile for builds



---

🚀 Future Ideas

Support multiple clients at once

Serve actual files (like index.html)

Handle more HTTP methods (GET, POST)

Add more tests



---

📜 License

MIT License (see LICENSE file)

---

👉 This one feels like something a **student would upload** to GitHub:  
- Simple and honest (“what I learned”)  
- Light roadmap, no fancy badges  
- Straightforward instructions  


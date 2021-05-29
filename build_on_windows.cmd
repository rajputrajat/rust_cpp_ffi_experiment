cargo build
clang++.exe .\hello_c.cpp .\target\debug\hello_c_world.lib -lwsock32 -lws2_32 -ladvapi32 -luserenv

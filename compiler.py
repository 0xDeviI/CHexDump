import subprocess
import os

def run(cmd):
    cmd = cmd.split()
    subprocess.run(cmd)

if __name__ == '__main__':
    if (os.path.exists("bin/") == False):
        os.mkdir("bin/")
    run('gcc -o bin/CHexDump CHexDump.c')
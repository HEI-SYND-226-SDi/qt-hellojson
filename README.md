# HelloJSON example

JSON with Qt example


## Install dependencies

        # sudo apt update
        # sudo apt install git nano vim neovim cmake cmake-curses-gui ninja-build g++ gdb qt5-default qtconnectivity5-dev
    
    
## Clone repository

        # git clone https://github.com/HEI-SYND-226-SDi/qt-hellojson.git


## Build

        # mkdir Release
        # cd Release
        # cmake -G Ninja -DCMAKE_BUILD_TYPE=Release ..
        # ninja
        
        
## Run

        # ./generate
        # ./generate > books.json 2>&1
        # ./parse
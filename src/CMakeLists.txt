
set(project_SRCS
    # place your source codes here
    main.cpp
)

find_package(SDL2 REQUIRED)
find_package(SDL2_gfx REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_mixer REQUIRED)
find_package(SDL2_net REQUIRED)
find_package(SDL2_ttf REQUIRED)

set(project_LIBS
    SDL2::Main
    SDL2::GFX
    SDL2::Image
    SDL2::Mixer
    SDL2::Net
    SDL2::TTF
)

add_executable(sdl2template ${project_SRCS})
target_link_libraries(sdl2template ${project_LIBS})

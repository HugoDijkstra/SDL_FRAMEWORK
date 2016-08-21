# Install script for directory: /home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/libSDL2.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/libSDL2-2.0.so.0.4.0"
    "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/libSDL2-2.0.so.0"
    "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/libSDL2-2.0.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so.0.4.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libSDL2-2.0.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/libSDL2main.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/SDL2" TYPE FILE FILES
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengles2_gl2platform.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_egl.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_windows.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_main.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_copying.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_common.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_gesture.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_surface.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_harness.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_power.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_pandora.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_endian.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_rect.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_mutex.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_platform.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_font.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_fuzzer.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_events.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_joystick.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_atomic.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_timer.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_hints.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_rwops.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_messagebox.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_scancode.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_compare.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/begin_code.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_quit.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_assert.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_images.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_bits.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_blendmode.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_wiz.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_render.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_audio.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_error.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_winrt.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_syswm.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_pixels.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_mouse.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_psp.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_assert.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_shape.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_random.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_minimal.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_revision.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_version.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_loadso.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_md5.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_keycode.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_haptic.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengles2.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_gamecontroller.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_macosx.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengles2_khrplatform.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengles.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_system.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_thread.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_android.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_clipboard.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_cpuinfo.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_types.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_config_iphoneos.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_touch.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_keyboard.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_filesystem.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_stdinc.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/close_code.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_crc32.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_log.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_video.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_test_log.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengl_glext.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengles2_gl2.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengl.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_opengles2_gl2ext.h"
    "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/include/SDL_name.h"
    "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/include/SDL_config.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  
      execute_process(COMMAND /usr/bin/cmake -E create_symlink
      "libSDL2-2.0.so" "libSDL2.so")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE FILE FILES "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/libSDL2.so")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/sdl2.pc")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE PROGRAM FILES "/home/hugo/Desktop/programming/Sdl/build/external/SDL2-2.0.4/sdl2-config")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aclocal" TYPE FILE FILES "/home/hugo/Desktop/programming/Sdl/external/SDL2-2.0.4/sdl2.m4")
endif()


project('doom_eng', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3','b_vscrt=md'])

vcpkg_base_path = find_program('vcpkg').full_path().replace('vcpkg.EXE', '')
vcpkg_release_path = vcpkg_base_path / 'installed' / 'x64-windows'
vcpkg_include_path = vcpkg_release_path / 'include'

sdl2_lib_path = vcpkg_release_path / 'lib'
sdl2_bin_path = vcpkg_release_path / 'bin' # Add this line
sdl2_main_lib_path = sdl2_lib_path / 'manual-link'

incdir = include_directories('.')

srcs = [
  'main.cpp',
  'WADLoader.cpp',
  'WADReader.cpp',
  'Map.cpp',
]

# sdl2_deps = declare_dependency(
#   include_directories: include_directories(vcpkg_include_path),
#   link_args: [
#     sdl2_lib_path / 'SDL2.lib',
#     sdl2_main_lib_path / 'SDL2main.lib',
#     '-lkernel32',
#     '-luser32',
#     '-lgdi32',
#     '-lshell32',
#     '-lole32',
#     '-loleaut32',
#     '-luuid',
#     '-lcomdlg32',
#     '-ladvapi32'
#   ]
# )

sdl2_deps = []

# Copy SDL2.dll to the build directory
install_data(sources: sdl2_bin_path / 'SDL2.dll', install_dir: meson.current_build_dir())

# Define the executable target
executable('diydoom', srcs,
  dependencies: [sdl2_deps],
  include_directories: incdir,
  install: true)


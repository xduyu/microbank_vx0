# CMakeList.txt : CMake project for CMBanking_v0-0-1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMBanking_v0-0-1")

# Add source to this project's executable.
add_executable (CMBanking_v0-0-1 "src/Main.cpp" "includes/Main.h" "src/Accout.cpp" "includes/Account.h" "includes/models/User.h" "src/models/RUser.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMBanking_v0-0-1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

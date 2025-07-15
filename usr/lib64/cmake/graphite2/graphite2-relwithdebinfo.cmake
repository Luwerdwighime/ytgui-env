#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "gr2_graphite2" for configuration "RelWithDebInfo"
set_property(TARGET gr2_graphite2 APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(gr2_graphite2 PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib64/libgraphite2.so.3.2.1"
  IMPORTED_SONAME_RELWITHDEBINFO "libgraphite2.so.3"
  )

list(APPEND _cmake_import_check_targets gr2_graphite2 )
list(APPEND _cmake_import_check_files_for_gr2_graphite2 "${_IMPORT_PREFIX}/lib64/libgraphite2.so.3.2.1" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)

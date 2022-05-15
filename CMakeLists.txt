cmake_minimum_required(VERSION 3.10)
project(iterator)

set(CMAKE_CXX_STANDARD 14)

include_directories(concrete-iterators)
include_directories(iterator)
include_directories(video)

add_executable(iterator
        concrete-iterators/CommentCountIterator.cpp
        concrete-iterators/CommentCountIterator.h
        concrete-iterators/DefaultIterator.cpp
        concrete-iterators/DefaultIterator.h
        concrete-iterators/TimestampIterator.cpp
        concrete-iterators/TimestampIterator.h
        concrete-iterators/ViewCountIterator.cpp
        concrete-iterators/ViewCountIterator.h

        iterator/Iterator.h
        iterator/List.h

        video/User.cpp
        video/User.h
        video/Video.cpp
        video/Video.h
        video/VideoContainer.cpp
        video/VideoContainer.h

        sorting-algorithms/quicksort.cpp
        sorting-algorithms/quicksort.h

        main.cpp)

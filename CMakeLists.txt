cmake_minimum_required(VERSION 3.24)
project(Vibe)

set(CMAKE_CXX_STANDARD 20)

add_executable(Vibe main.cpp Utilities/vtypes.h Utilities/vdefaults.h Core/Waves/Waveform.cpp Core/Waves/Waveform.h Core/Waves/Periodic/SineWave.cpp Core/Waves/Periodic/SineWave.h Core/Waves/Periodic/SquareWave.cpp Core/Waves/Periodic/SquareWave.h test.cpp Core/Waves/Periodic/TriangleWave.cpp Core/Waves/Periodic/TriangleWave.h Utilities/vmath.h Core/Waves/Periodic/SawtoothWave.cpp Core/Waves/Periodic/SawtoothWave.h Core/Waves/Random/WhiteNoise.cpp Core/Waves/Random/WhiteNoise.h Core/Envelopes/Envelope.cpp Core/Envelopes/Envelope.h Core/Envelopes/EnvelopeStage.h Core/Envelopes/InterpolationType.h Core/Envelopes/CalculationType.h Utilities/vconcepts.h Engine/Engine.cpp Engine/Engine.h Core/Object.h Core/Data/RangedNumber.cpp Core/Data/RangedNumber.h Core/Waves/Periodic/PeriodicWave.cpp Core/Waves/Periodic/PeriodicWave.h Core/Sources/Source.cpp Core/Sources/Source.h Core/Waves/Random/RandomWave.cpp Core/Waves/Random/RandomWave.h)

set(OPENAL_LIBRARY D:/Projects/Lonyeld/Vibe/OpenAL/libs/Win64/OpenAL32.lib)
set(OPENAL_INCLUDE_DIR D:/Projects/Lonyeld/Vibe/OpenAL/include)
find_package(OpenAL REQUIRED alut REQUIRED)

include_directories("${OPENAL_INCLUDE_DIR}")
target_link_libraries(Vibe "${OPENAL_LIBRARY}")

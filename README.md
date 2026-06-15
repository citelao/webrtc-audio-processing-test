# webrtc-audio-processing-test

Test the `webrtc-audio-processing` library in vcpkg (https://github.com/microsoft/vcpkg/pull/52402).

## Usage

```powershell
$env:PATH_TO_VCPKG = "C:/Users/ben/Projects/vcpkg"

# Configure cmake
cmake -B build -S . `
       -DCMAKE_TOOLCHAIN_FILE="$env:PATH_TO_VCPKG/scripts/buildsystems/vcpkg.cmake" `
       -DVCPKG_OVERLAY_PORTS="$env:PATH_TO_VCPKG/ports"

# Build
cmake --build build

# Run
.\build\Debug\main.exe
```
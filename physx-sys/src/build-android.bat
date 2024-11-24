mkdir build-android

cd build-android

SET NDK_HOME=c:\Android\ndk\27.0.12077973\
SET BUILD_TYPE=release

SET ANDROID_ABI=arm64-v8a
SET ANDROID_PLATFORM=30
SET ANDROID_STL=c++_static

cmake -G Ninja .. -DCMAKE_TOOLCHAIN_FILE=%NDK_HOME%\build\cmake\android.toolchain.cmake ^
	     -DANDROID_ABI=%ANDROID_ABI% ^
	     -DANDROID_PLATFORM=%ANDROID_PLATFORM% ^
	     -DANDROID_STL=%ANDROID_STL% ^
		 -DCMAKE_BUILD_TYPE=%BUILD_TYPE%
	 
ninja
cd..

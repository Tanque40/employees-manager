workspace "EmployeesManager"
architecture "x64"

configurations {
	"Debug",
	"Release"
}

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

project "EmployeesManager"
location "EmployeesManager"
kind "ConsoleApp"
language "C++"
cppdialect "C++17"
staticruntime "on"

targetdir("bin/" .. outputdir .. "/%{prj.name}")
objdir("bin-int/" .. outputdir .. "/%{prj.name}")

files {
	"%{prj.name}/src/**.h",
	"%{prj.name}/src/**.cpp"
}

filter "configurations:Debug"
runtime "Debug"
symbols "On"

filter "configurations:Release"
runtime "Release"
symbols "On"

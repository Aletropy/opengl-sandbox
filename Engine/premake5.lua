project "Engine"
    kind "StaticLib"
    language "C++"
    cppdialect "C++20"

    targetdir ("%{wks.location}/bin/%{cfg.buildcfg}")

    files
    {
        "src/**.h",
        "src/**.cpp"
    }

    includedirs
    {
        "src"
    }

    links
    {
    }

    filter "configurations:Debug"
        defines { "DEBUG" }
        runtime "Debug"
        symbols "on"

    filter "configurations:Release"
        defines { "NDEBUG" }
        runtime "Release"
        optimize "on"


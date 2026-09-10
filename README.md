# BananasEngine

A compact DirectX 11 graphics-engine study built in C++ over four months as an academic project. It focuses on the rendering pipeline and exposes real-time controls through ImGui.

![BananasEngine screenshot](https://github.com/Simiobanana/BananasEngine/assets/114266340/f664c659-8ae3-4a96-b62c-57f8f39c37ab)

## What it demonstrates

- OBJ model loading and textured mesh rendering.
- Albedo and normal-map handling.
- Translation, rotation and scale controls at runtime.
- Light position, color and intensity controls.
- Background and mesh-color controls.
- DirectX resource wrappers for devices, buffers, shaders, textures, swap chains, viewports and render targets.

## Technical structure

The project separates rendering responsibilities into focused C++ classes under `include/` and `src/`. `BananasEngine.cpp` coordinates the application loop and GPU resources, while `UserInterface.cpp` provides the ImGui controls.

| Area | Main components |
|---|---|
| Window and presentation | `Window`, `SwapChain`, `Viewport` |
| GPU resources | `Buffer`, `Texture`, `SamplerState` |
| Rendering | `Device`, `DeviceContext`, `RenderTargetView`, `DepthStencilView` |
| Assets and shaders | `ModelLoader`, `OBJ_Loader`, `InputLayout`, `ShaderProgram` |

## Run locally

1. Open `BananasEngine/BananasEngine_2010.sln` in Visual Studio on Windows.
2. Ensure the Windows SDK and DirectX development dependencies are installed.
3. Build and run the solution using the matching platform configuration.

Model and texture imports are configured in code. This repository contains third-party libraries and starter components; their original licenses and credits remain with their authors.

## Context

This is a learning project that documents my understanding of a real-time graphics pipeline. It is not presented as a production-ready general-purpose engine.

[Portfolio](https://alejandro-urvieta-portfolio.alejandroug2608.chatgpt.site) · [GitHub profile](https://github.com/Simiobanana)


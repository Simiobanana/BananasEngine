#pragma once
#include "Prerequisites.h"

/// <summary>
/// This class representing create all methods to project
/// </summary>
class Device {
public:
    Device() = default;
    ~Device() = default;

    void
        init();

    void
        update();

    void
        render();

    void
        destroy();

    /// <summary>
    /// This method create to render target view
    /// </summary>
    /// <param name="pResource"> Pointer to resource</param>
    /// <param name="pDesc"> Pointer to render target view desc </param>
    /// <param name="ppRTView"> Point to render target view </param>
    /// <returns></returns>
    HRESULT
        CreateRenderTargetView(ID3D11Resource* pResource,
            const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
            ID3D11RenderTargetView** ppRTView);

    /// <summary>
    /// This method create to textures 2D
    /// </summary>
    /// <param name="pDesc"></param>
    /// <param name="pInitialData"></param>
    /// <param name="ppTexture2D"></param>
    /// <returns></returns>
    HRESULT
        CreateTexture2D(const D3D11_TEXTURE2D_DESC* pDesc,
            const D3D11_SUBRESOURCE_DATA* pInitialData,
            ID3D11Texture2D** ppTexture2D);

    /// <summary>
    /// Create to depth stencil view
    /// </summary>
    /// <param name="pResource"></param>
    /// <param name="pDesc"></param>
    /// <param name="ppDepthStencilView"></param>
    /// <returns></returns>
    HRESULT
        CreateDepthStencilView(ID3D11Resource* pResource,
            const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
            ID3D11DepthStencilView** ppDepthStencilView);

    /// <summary>
    /// Create vertex shader
    /// </summary>
    /// <param name="pShaderBytecode"></param>
    /// <param name="BytecodeLength"></param>
    /// <param name="pClassLinkage"></param>
    /// <param name="ppVertexShader"></param>
    /// <returns></returns>
    HRESULT
        CreateVertexShader(const void* pShaderBytecode,
            unsigned int BytecodeLength,
            ID3D11ClassLinkage* pClassLinkage,
            ID3D11VertexShader** ppVertexShader);

    /// <summary>
    /// Create input layout
    /// </summary>
    /// <param name="pInputElementDescs"></param>
    /// <param name="NumElements"></param>
    /// <param name="pShaderBytecodeWithInputSignature"></param>
    /// <param name="BytecodeLength"></param>
    /// <param name="ppInputLayout"></param>
    /// <returns></returns>
    HRESULT
        CreateInputLayout(const D3D11_INPUT_ELEMENT_DESC* pInputElementDescs,
            unsigned int NumElements,
            const void* pShaderBytecodeWithInputSignature,
            unsigned int BytecodeLength,
            ID3D11InputLayout** ppInputLayout);

    /// <summary>
    /// Create pixel shader
    /// </summary>
    /// <param name="pShaderBytecode"></param>
    /// <param name="BytecodeLength"></param>
    /// <param name="pClassLinkage"></param>
    /// <param name="ppPixelShader"></param>
    /// <returns></returns>
    HRESULT
        CreatePixelShader(const void* pShaderBytecode,
            unsigned int BytecodeLength,
            ID3D11ClassLinkage* pClassLinkage,
            ID3D11PixelShader** ppPixelShader);

    /// <summary>
    /// Create buffer
    /// </summary>
    /// <param name="pDesc"></param>
    /// <param name="pInitialData"></param>
    /// <param name="ppBuffer"></param>
    /// <returns></returns>
    HRESULT
        CreateBuffer(const D3D11_BUFFER_DESC* pDesc,
            const D3D11_SUBRESOURCE_DATA* pInitialData,
            ID3D11Buffer** ppBuffer);

    /// <summary>
    /// Create ampler state
    /// </summary>
    /// <param name="pSamplerDesc"></param>
    /// <param name="ppSamplerState"></param>
    /// <returns></returns>
    HRESULT CreateSamplerState(
        const D3D11_SAMPLER_DESC* pSamplerDesc,
        ID3D11SamplerState** ppSamplerState);

public:
    /// <summary>
    /// Pointer to the device interface
    /// </summary>
    ID3D11Device* m_device = nullptr;

};
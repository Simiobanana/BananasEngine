
# Motor Gráfico DirectX
¡Bienvenido al repositorio del Motor Gráfico DirectX!

Este motor gráfico ha sido creado como parte de un proyecto en clase, con el objetivo de proporcionar una plataforma sólida para el desarrollo de aplicaciones y juegos en entornos DirectX. Aquí encontrarás información sobre las diversas clases y componentes que conforman este motor.

## Componentes Principales
Buffer
La clase Buffer proporciona funcionalidades para la gestión de búferes de datos en la GPU.

DepthStencilView
DepthStencilView facilita la gestión de vistas de profundidad y stencil para la renderización 3D.

Device
Device representa el dispositivo gráfico principal y proporciona una interfaz para la creación y gestión de recursos.

DeviceContext
DeviceContext es responsable de enviar comandos al dispositivo gráfico para realizar operaciones de renderizado.

InputLayout
InputLayout define el diseño de los datos de entrada para los shaders.

ModelLoader
ModelLoader se encarga de cargar modelos en el motor gráfico desde archivos específicos.

OBJ_Loader
OBJ_Loader proporciona funcionalidades para cargar modelos en formato OBJ.

RenderTargetView
RenderTargetView gestiona vistas de destino de renderizado para la renderización de texturas y otros objetos.

SampleState
SampleState controla cómo se realizan las operaciones de muestreo durante el proceso de renderizado.

ShaderProgram
ShaderProgram encapsula los shaders utilizados en el proceso de renderizado.

SwapChain
SwapChain facilita la presentación de imágenes renderizadas en la ventana de visualización.

Texture
Texture representa una textura en el motor gráfico y proporciona funcionalidades para su creación y manipulación.

Viewport
Viewport define la región en la que se realiza el renderizado en el destino de renderizado.

Window
Window gestiona la ventana de la aplicación y proporciona una interfaz para interactuar con ella.

## Entorno de Desarrollo
Este motor gráfico se ha desarrollado utilizando la librería DirectX con la ayuda del entorno de desarrollo integrado Visual Studio 2019. DirectX proporciona un conjunto de herramientas poderosas para el desarrollo de gráficos en tiempo real en plataformas Windows.

## Funcionalidades Actuales
El motor gráfico es capaz de cargar modelos en el entorno, renderizarlos en la pantalla ademas de poder añadirle sus respectivas texturas albedo junto con las normales.

## Aqui unas imagenes de un par de modelos texturas y la UI
![image](https://github.com/Simiobanana/BananasEngine/assets/114266340/f664c659-8ae3-4a96-b62c-57f8f39c37ab)


¡Gracias por visitar nuestro repositorio! Esperamos que encuentres útil este motor gráfico en tus proyectos de desarrollo de juegos y aplicaciones. Si tienes alguna pregunta o sugerencia, no dudes en abrir un issue o ponerte en contacto con nosotros.


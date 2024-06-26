#include "ModelLoader.h"
#include "OBJ_Loader.h"

void ModelLoader::init()
{
}

void ModelLoader::update()
{
}

void ModelLoader::render()
{
}

void ModelLoader::destroy()
{
}

/*Mesh
ModelLoader::Load(std::string objFileName)
{
	Mesh mesh;
	objl::Loader Loader;
	if (Loader.LoadFile(objFileName)) {
		mesh.name = objFileName;

		mesh.vertex.reserve(Loader.LoadedVertices.size());
		mesh.index.reserve(Loader.LoadedIndices.size());

		for (auto& vertex : Loader.LoadedVertices) {
			mesh.vertex.emplace_back(SimpleVertex{
				{vertex.Position.X, vertex.Position.Y,vertex.Position.Z},
				{vertex.TextureCoordinate.X, 1.0f - vertex.TextureCoordinate.Y},
				{vertex.Normal.X, vertex.Normal.Y, vertex.Normal.Z}
				});
		}

		for (auto index : Loader.LoadedIndices) {
			mesh.index.push_back(index);
		}

		mesh.numVertex = mesh.vertex.size();
		mesh.numIndex = mesh.index.size();
	}
	else {
		WARNING("ERROR: ModelLoader::LoadV2 : [CREATION OF RESOURCE : FALSE] [CHECK FOR ModelLoader LoadV2] \n");
		exit(1);
	}

	//WARNING("ModelLoader::Load() [Load of file: " << objFileName.c_str() << "] \n");

	return mesh;
}*/
Mesh
ModelLoader::Load(std::string objFileName)
{
	//Temporal Load Data
	Mesh mesh;
	objl::Loader Loader;
	Loader.LoadFile(objFileName);

	mesh.name = objFileName;

	WARNING("ModelLoader::Load() [Load of file: " << objFileName.c_str() << "] \n");

	//Load and set data to custom structure (SimpleVertex)
	mesh.vertex.resize(Loader.LoadedVertices.size());

	for (int i = 0; i < mesh.vertex.size(); i++)
	{
		// Load Positions
		mesh.vertex[i].Pos.x = Loader.LoadedVertices[i].Position.X;
		mesh.vertex[i].Pos.y = Loader.LoadedVertices[i].Position.Y;
		mesh.vertex[i].Pos.z = Loader.LoadedVertices[i].Position.Z;

		// Load Textures
		mesh.vertex[i].Tex.x = Loader.LoadedVertices[i].TextureCoordinate.X;
		mesh.vertex[i].Tex.y = 1.0f - Loader.LoadedVertices[i].TextureCoordinate.Y;

		//normal
		mesh.vertex[i].Nor.x = Loader.LoadedVertices[i].Normal.X;
		mesh.vertex[i].Nor.y = Loader.LoadedVertices[i].Normal.Y;
		mesh.vertex[i].Nor.z = Loader.LoadedVertices[i].Normal.Z;
	}

	// Load and set data to custom structure
	mesh.index.resize(Loader.LoadedIndices.size());
	for (int i = 0; i < mesh.index.size(); i++)
	{
		mesh.index[i] = Loader.LoadedIndices[i];
	}

	mesh.numVertex = mesh.vertex.size();
	mesh.numIndex = mesh.index.size();

	return mesh;
}

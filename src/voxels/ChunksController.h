#ifndef VOXELS_CHUNKSCONTROLLER_H_
#define VOXELS_CHUNKSCONTROLLER_H_

class Chunks;
class Lighting;
class WorldFiles;
class VoxelRenderer;
class ChunksLoader;

class ChunksController {
private:
	Chunks* chunks;
	Lighting* lighting;
	ChunksLoader** loaders;
public:
	ChunksController(Chunks* chunks, Lighting* lighting);
	~ChunksController();

	bool loadVisible(WorldFiles* worldFiles);
	bool _buildMeshes(VoxelRenderer* renderer, int tick);
};

#endif /* VOXELS_CHUNKSCONTROLLER_H_ */
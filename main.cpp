#include "tgaimage.h"
#include "wire_mesh_renderer.h"

const TGAColor white = TGAColor(255, 255, 255, 255);
const TGAColor red = TGAColor(255, 0, 0, 255);

int main(int argc, char **argv)
{
	TGAImage image(100, 100, TGAImage::RGB);
	WireMeshRenderer::draw_line(52, 41, 100, 100, image, white);
	image.flip_vertically(); // I want to have the origin at the left bottom corner of the image.
	image.write_tga_file("output.tga");
	return 0;
}
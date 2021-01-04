#include <iostream>
#include <unistd.h>

#include "mimicry_openvr/json.hpp"
#include "mimicry_openvr/mimicry_app.hpp"


using json = nlohmann::json;


// TODO: Get parameters for:
// - Parameter file location
// - Verbose output?
// - Allow output for non-bimanual mode regardless of controller role
// - Specifying refresh rate of 0 should indicate as fast as possible
// - Add tracker configuration

int main(int argc, char* argv[]) 
{
	MimicryApp app = MimicryApp();
	
	chdir("../../../src/mimicry_openvr");

	app.runMainLoop("param_files/vive_params.json");
}
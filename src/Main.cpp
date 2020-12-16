/** @file Main.cpp
 * @brief defines the entry point for the application.
 */
#include <Core/Core.h>
#include <SWC/SwcReader.h>

#include <filesystem>

int main(int argc, char* argv[]) {
    NeuralViz::Log::Init();
    LOG_INFO("NeuralViz started");

    std::filesystem::path cwd = std::filesystem::current_path() / "../../../../res/swc_files/sample_0.swc";

    std::unique_ptr<NeuralViz::Neuron> neuron = NeuralViz::SwcReader::Parse(cwd.string());

    return 0;
}

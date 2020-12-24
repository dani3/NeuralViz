#include <SWC/SwcReader.h>
#include <Morpho/Node.h>

#include <sstream>
#include <fstream>
#include <string>

namespace NeuralViz {
    template <typename Out>
    static void split(const std::string& s, char delim, Out result) {
        std::istringstream iss(s);
        std::string item;
        while (std::getline(iss, item, delim)) {
            if (!item.empty()) {
                *result++ = item;
            }
        }
    }

    std::unique_ptr<Neuron> SwcReader::Parse(const QString& path) {
        std::fstream file;

        file.open(path.toStdString());
        ASSERT(file.is_open(), "SWC file cannot be read.");

        std::unique_ptr<Neuron>neuron = std::make_unique<Neuron>();
        while (file) {
            std::string line;
            std::getline(file, line);

            // Ignore empty lines and comments
            if (!line.empty() && (line.at(0) != '#')) {
                std::vector<std::string> elems;
                split(line, ' ', std::back_inserter(elems));

                int id = std::stoi(elems[0]);
                Node::Type type;
                switch (std::stoi(elems[1])) {
                case 1:
                    type = Node::Type::SOMA;
                    break;

                case 2:
                    type = Node::Type::AXON;
                    break;

                case 3:
                    type = Node::Type::BASAL_DENTRITE;
                    break;

                case 4:
                    type = Node::Type::APICAL_DENDRITE;
                    break;

                default:
                    type = Node::Type::CUSTOM;
                    break;
                }

                float x = std::stof(elems[2]);
                float y = std::stof(elems[3]);
                float z = std::stof(elems[4]);
                float radius = std::stof(elems[5]);
                int parent = std::stoi(elems[6]);

                neuron->Push(
                    Node(id, type, Vec3<float>(x, y, z), radius, parent));
            }
        }

        return neuron;
    }
}

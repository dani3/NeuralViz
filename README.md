# NerualViz

Neuron visualizer implemented in C++ using QT5.

## Getting started

Prerequisites:

- [Git](https://git-scm.com/downloads)
- [Visual Studio 2019](https://visualstudio.microsoft.com/vs/)
- [vcpkg](https://github.com/microsoft/vcpkg)

### Dependencies

To build the project you will need to install the following packages using _vcpkg_.

- [spdlog](https://github.com/gabime/spdlog)

    ```sh
    $ ./vcpkg.exe install spdlog
    ```

## SWC Files

SWC files are a widely used format to store neuron morphologies, and are used to share digitally reconstructed neurons using [NeuroMorpho](http://www.neuromorpho.org/).

The format specification is described [here](http://www.neuronland.org/NLMorphologyConverter/MorphologyFormats/SWC/Spec.html).

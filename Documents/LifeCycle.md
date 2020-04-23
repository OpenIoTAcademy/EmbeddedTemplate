**Open IoT Academy**

**Software Development Life Cycle** : V Model of Development

Open IoT Academy is an open source organisation and produces high assurance and high quality software for IoT.

For this purposes, Open IoT Academy uses **V Model of Development Life Cycle** for its open source development. 

​	*In this document, we do not detail V Model of Development; for details please see [Wikipedia](https://en.wikipedia.org/wiki/V-Model_(software_development)).* 

![V-Model-Of-Development](https://github.com/OpenIoTAcademy/Resources/blob/master/Images/VModelOfDevelopment.jpg)

Please see the phases for the V  Model of Development;

- **External Requirements**: In this phase, the external requirements (e.g. User Expectations) for the final product needs to be defined using the external resources such as product or standard specs. 

- **External Tests**: Once the external requirements are defined, the tests need to be implemented to validate the feature. There is no implementation about the final product yet, therefore, mock implementation needs to be done for the external interface to pass the external tests.

  Automated test infrastructure for the external tests must be up and run in this phase and must be run for each modification during the development.

- **Internal Requirements**: In this phase, the external requirements are translated to internal requirements (internal design documentation). The architecture team prepares the software design including components, modules, roles and interactions between each other.

- **Integration Tests**: Integration tests are defined and implemented. There is no implementation yet so mock implementation needs to be done for the integration tests. 

  Automated test infrastructure for the integration tests must be up and run in this phase and must be run for each modification during the development.

- **Module Requirements**: Internal requirements are split into stand-alone modules/units and requirements are defined for the Unit. 

- **Unit Tests** : Like Test Driven Development(TDD), Unit tests are defined and developed for the unit. There is no implementation yet so the mock implementation are done for the unit.

  Automated test infrastructure for the unit tests must be up and run in this phase and must be run for each modification during the development.

  In the unit test, in addition to automated test, there can be some metrics, and SW Quality tools can be a part of the tests.

  Some examples;

  - Static Analysis Tool
  - Dynamic Analysis Tools
  - Code Coverage Tools (%100 requirement)
  - MISRA-2012 checker

  All unit level modifications must meet all above requirements.

- **Development**: Development is the latest phase in the V Model of Development. All automated testing and Continuous Integration(CI) interface is ready and any modification is well tested with the testing infrastructure. In this way, a bug can be found immediately as soon as the bug introduced. Each modification(commit) has the final product quality (well tested). 

  All errors and even warnings must be blocker and the Continuous Integration(CI) tool must not allow the modification to be part of the main code stream (master branch).




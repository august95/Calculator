#include "Component.h"


Component::~Component()
{
}

Ident Component::Identify()
{
    return Uninitialized;
}

float Component::Excecute()
{
    return 0.0f;
}

void Component::SetChild(Component* value)
{

}

Component* Component::GetChild()
{
    return nullptr;
}

int Component::NumberOfChildren()
{
    return 0;
}

void Component::PrintCompositeStructure()
{
    for (int i = 0; i < children.size(); i++)
        children[i]->PrintCompositeStructure();
}

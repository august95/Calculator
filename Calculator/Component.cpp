#include "Component.h"

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

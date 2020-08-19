//Create an empty
l2CppObject* empty = CRASH_UNLESS(il2cpp_utils::New("UnityEngine", "GameObject"));

//Add a particle system component
Il2CppObject* ParticleSystem = CRASH_UNLESS(il2cpp_utils::RunMethod(empty, "AddComponent", il2cpp_utils::GetSystemType("UnityEngine", "ParticleSystem")));

//Get the transfrom component
Il2CppObject* transform = CRASH_UNLESS(il2cpp_utils::RunMethod(empty, "GetComponent", il2cpp_utils::GetSystemType("UnityEngine", "Transform")));

//Change the transform component's position value
CRASH_UNLESS(il2cpp_utils::SetPropertyValue(transform, "position", Vector3{0,0,-5}));

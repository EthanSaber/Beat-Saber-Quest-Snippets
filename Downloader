//Set the URL
Il2CppString* uri = il2cpp_utils::createcsstr("https://www.w3.org/TR/PNG/iso_8859-1.txt");

//Prepares a web request
Il2CppObject* request = CRASH_UNLESS(il2cpp_utils::RunMethod("UnityEngine.Networking", "UnityWebRequest", "Get", uri));

//Sends the request
CRASH_UNLESS(il2cpp_utils::RunMethod(request, "SendWebRequest"));

//Waits to receive
sleep(5);

//Retreives the downloadHandler
Il2CppObject* handler = CRASH_UNLESS(il2cpp_utils::GetPropertyValue(request, "downloadHandler"));

//Retreives the text
Il2CppString* string = CRASH_UNLESS(il2cpp_utils::GetPropertyValue<Il2CppString*>(handler, "text"));

//Converts it to a c++ string
std::string text = to_utf8(csstrtostr(string));

//Logs the output
getLogger().info(text);

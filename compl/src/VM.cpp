#include <string>
#include "lua.h"
#include "lualib.h"

int main() {
    lua_State* l = luaL_newstate();
    lua_close(l);
    return 0;
}
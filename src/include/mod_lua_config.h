#pragma once

typedef struct mod_lua_config_s mod_lua_config;

struct mod_lua_config_s {
    char *    system_path;
    char *    user_path;
};

mod_lua_config * mod_lua_config_create(char *, char *);

int mod_lua_config_free(mod_lua_config *);
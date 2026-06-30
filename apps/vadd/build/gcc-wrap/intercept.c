#define _GNU_SOURCE
#include <dlfcn.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <spawn.h>
typedef int (*execve_func_t)(const char *pathname, char *const argv[], char *const envp[]);
typedef int (*execv_func_t)(const char *pathname, char *const argv[]);
typedef int (*execvp_func_t)(const char *file, char *const argv[]);
typedef int (*posix_spawn_func_t)(pid_t *pid, const char *path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]);
typedef int (*posix_spawnp_func_t)(pid_t *pid, const char *file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]);
static const char* check_wrap(const char* path) {
    if (!path) return path;
    if (strcmp(path, "/usr/bin/gcc") == 0 || strcmp(path, "gcc") == 0 || strcmp(path, "cc") == 0 || strcmp(path, "/usr/bin/cc") == 0) {
        const char* wrap = getenv("GCC_WRAP_SCRIPT");
        if (wrap) return wrap;
    }
    if (strcmp(path, "/usr/bin/g++") == 0 || strcmp(path, "g++") == 0 || strcmp(path, "c++") == 0 || strcmp(path, "/usr/bin/c++") == 0) {
        const char* wrap = getenv("CXX_WRAP_SCRIPT");
        if (wrap) return wrap;
    }
    return path;
}
int execve(const char *pathname, char *const argv[], char *const envp[]) {
    execve_func_t old_execve = (execve_func_t)dlsym(RTLD_NEXT, "execve");
    return old_execve(check_wrap(pathname), argv, envp);
}
int execv(const char *pathname, char *const argv[]) {
    execv_func_t old_execv = (execv_func_t)dlsym(RTLD_NEXT, "execv");
    return old_execv(check_wrap(pathname), argv);
}
int execvp(const char *file, char *const argv[]) {
    execvp_func_t old_execvp = (execvp_func_t)dlsym(RTLD_NEXT, "execvp");
    return old_execvp(check_wrap(file), argv);
}
int posix_spawn(pid_t *pid, const char *path, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]) {
    posix_spawn_func_t old_posix_spawn = (posix_spawn_func_t)dlsym(RTLD_NEXT, "posix_spawn");
    return old_posix_spawn(pid, check_wrap(path), file_actions, attrp, argv, envp);
}
int posix_spawnp(pid_t *pid, const char *file, const posix_spawn_file_actions_t *file_actions, const posix_spawnattr_t *attrp, char *const argv[], char *const envp[]) {
    posix_spawnp_func_t old_posix_spawnp = (posix_spawnp_func_t)dlsym(RTLD_NEXT, "posix_spawnp");
    return old_posix_spawnp(pid, check_wrap(file), file_actions, attrp, argv, envp);
}


#ifndef VEC3_H
#define VEC3_H
class vec3
{
  public :
    vec3()=default;
    ~vec3() noexcept =default;
    vec3(const vec3 &)=default;
    vec3 & operator=(const vec3 &)=default;
    vec3(vec3 &&)=default;
    vec3 & operator=(vec3 &&)=default;
};

#endif

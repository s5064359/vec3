
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
    float m_x=0.0f;
    float m_y=0.0f;
    float m_z=0.0f;
};

#endif

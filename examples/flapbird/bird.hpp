#ifndef BIRD_HPP_
#define BIRD_HPP_

#include "abcgOpenGL.hpp"

#include "gamedata.hpp"

class Bird {
public:
  void create(GLuint program);
  void paint(GameData const &gameData);
  void destroy();
  void update(GameData const &gameData, float deltaTime);

  glm::vec4 m_color{1};
  float m_rotation{}; // verificar necessidade
  float m_scale{0.125f}; 
  glm::vec2 m_translation{};  // (pra subir e descer)
  glm::vec2 m_velocity{}; // verificar necessidade, talvez tenha velocidade para baixo (Pipes_)

  abcg::Timer m_trailBlinkTimer; // // verificar necessidade
  abcg::Timer m_bulletCoolDownTimer; // verificar necessidade

private:
  GLuint m_program{};
  GLint m_translationLoc{};
  GLint m_colorLoc{};
  GLint m_scaleLoc{};
  GLint m_rotationLoc{};

  GLuint m_VAO{};
  GLuint m_VBO{};
  GLuint m_EBO{};
};
#endif
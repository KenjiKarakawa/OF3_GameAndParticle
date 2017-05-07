#pragma once

#include <string>
#include "ofxGui.h"
#include "ofxLabel.h"
#include "ParticleEmission.h"
#include "of3dUtils.h"
#include "../KenjiGUI/MyButton.h"


class Gui {
	private:
		std::string sprite;
		ofxFloatSlider size, lifeTime, angle, radius, timeSpawn; //slider float
		ofxVec2Slider worldPos, direction; //slider vector
		ofxIntSlider velocity; //slider int
		ofxColorSlider color; //slider color
		ofxToggle drawParameters;
		ofxToggle saveButton;
		ofxPanel gui;
		float buttonHide;
		ofVec2f mousePositon, antPosition;
		bool worldPosToMouse, directionPosToMouse;
	public: 
		ofxToggle localPosition;
		MyButton m_saveButton, m_resetButton, m_loadButton;
		MyButton m_playButton;

	public:
		void Init();
		void Update(ParticleEmission &emissor);
		void Draw();
		void Hide();
		void SetMousePosition(int x, int y);
		void ChangeDirectionAndPosition();
		void DrawDirectionAndCone(ofVec2f posit, ofVec2f direct);
		void DrawCenterAxis();

		void SetOrigin(ofVec2f origin);
		void SetDirection(ofVec2f direction);
		void SetOpenAngle(float openAngle);
		void SetSpeed(float speed);
		void SetSizeParticle(float radius);
		void SetLifeTime(float lifeTime);
		void SetSprite(string sprite);
		void SetSpawnTime(float timeSpawn);
		void SetColor(ofColor color);

		void MoveOriginParticle();
		void MoveDirectionParticle();
		bool ParameterHasChanged(const ParticleEmission &emissor);
		
};
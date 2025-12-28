#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(MyPlayLayer, PlayLayer) {

	struct Fields {
		CCSprite* m_bgSprite;
	};

	bool init(GJGameLevel* p0, bool p1, bool p2) {
		if (!PlayLayer::init(p0, p1, p2)) {
			return false;
		}

		CCMenu* menu = CCMenu::create();

		m_fields->m_bgSprite = CCSprite::create("bg.png"_spr);
		m_fields->m_bgSprite->setAnchorPoint({0.0f, 1.0f});
		m_fields->m_bgSprite->setPosition(ccp(390, 320));
		m_fields->m_bgSprite->setVisible(true);

		this->addChild(m_fields->m_bgSprite);

		return true;
	}
};
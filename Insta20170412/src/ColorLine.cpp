#include "ColorLine.h"

ColorLine::ColorLine(ofColor body_color)
{
	this->body_color = body_color;
	this->points.push_back(ofVec3f(0, 0, 0));
	this->move_value = 10;
}

ColorLine::~ColorLine()
{

}

void ColorLine::update()
{
	ofVec3f next;
	next.set(this->points[this->points.size() - 1]);
	next += ofVec3f(ofRandom(-this->move_value, this->move_value), ofRandom(-this->move_value, this->move_value), ofRandom(-this->move_value, this->move_value));

	this->points.push_back(next);
}

void ColorLine::draw()
{
	ofPath line_path = ofPath();
	line_path.setFilled(false);
	line_path.setStrokeColor(this->body_color);
	line_path.setStrokeWidth(2);
	line_path.moveTo(this->points[0]);
	for (int i = 1; i < this->points.size(); i++) {
		line_path.lineTo(this->points[i]);
	}

	line_path.draw();
	line_path.close();

	ofSetColor(this->body_color);
	ofNoFill();

	ofPushMatrix();
	ofTranslate(this->points[this->points.size() - 1]);
	ofSphere(5);
	ofPopMatrix();
}
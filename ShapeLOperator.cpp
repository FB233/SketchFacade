#include "ShapeLOperator.h"
#include "CGA.h"
#include "Shape.h"

namespace cga {

ShapeLOperator::ShapeLOperator(const Value& frontWidth, const Value& leftWidth) {
	this->name = "shapeL";
	this->frontWidth = frontWidth;
	this->leftWidth = leftWidth;
}

boost::shared_ptr<Shape> ShapeLOperator::apply(boost::shared_ptr<Shape>& shape, const Grammar& grammar, std::list<boost::shared_ptr<Shape> >& stack) {
	float actual_frontWidth;
	float actual_leftWidth;

	if (frontWidth.type == Value::TYPE_RELATIVE) {
		actual_frontWidth = shape->_scope.x * grammar.evalFloat(frontWidth.value, shape);
	}
	else {
		actual_frontWidth = shape->_scope.x * grammar.evalFloat(frontWidth.value, shape);
	}

	if (leftWidth.type == Value::TYPE_RELATIVE) {
		actual_leftWidth = shape->_scope.y * grammar.evalFloat(leftWidth.value, shape);
	}
	else {
		actual_leftWidth = shape->_scope.y * grammar.evalFloat(leftWidth.value, shape);
	}

	return shape->shapeL(shape->_name, actual_frontWidth, actual_leftWidth);
}

std::string ShapeLOperator::to_string() {
	std::string ret = "shapeL(";

	if (frontWidth.type == Value::TYPE_ABSOLUTE) {
		ret += frontWidth.value;
	}
	else if (frontWidth.type == Value::TYPE_RELATIVE) {
		ret += "'" + frontWidth.value;
	}
	else {
		ret += "~" + frontWidth.value;
	}
	ret += ", ";

	if (leftWidth.type == Value::TYPE_ABSOLUTE) {
		ret += leftWidth.value;
	}
	else if (leftWidth.type == Value::TYPE_RELATIVE) {
		ret += "'" + leftWidth.value;
	}
	else {
		ret += "~" + leftWidth.value;
	}
	ret += ")";

	return ret;
}

}

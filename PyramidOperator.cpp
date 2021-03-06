#include "PyramidOperator.h"
#include "CGA.h"
#include "Shape.h"

namespace cga {

PyramidOperator::PyramidOperator(const std::string& height) {
	this->name = "pyramid";
	this->height = height;
}

boost::shared_ptr<Shape> PyramidOperator::apply(boost::shared_ptr<Shape>& shape, const Grammar& grammar, std::list<boost::shared_ptr<Shape> >& stack) {
	float actual_height = grammar.evalFloat(height, shape);

	return shape->pyramid(shape->_name, actual_height);
}

std::string PyramidOperator::to_string() {
	return "pyramid(" + height + ")";
}

}

#include "FramebufferAttachment.hpp"

PyObject * MGLFramebufferAttachment_tp_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	MGLFramebufferAttachment * self = (MGLFramebufferAttachment *)type->tp_alloc(type, 0);

	if (self) {
	}

	return (PyObject *)self;
}

void MGLFramebufferAttachment_tp_dealloc(MGLFramebufferAttachment * self) {
	Py_TYPE(self)->tp_free((PyObject *)self);
}

int MGLFramebufferAttachment_tp_init(MGLFramebufferAttachment * self, PyObject * args, PyObject * kwargs) {
	return -1;
}

PyObject * MGLFramebufferAttachment_tp_str(MGLFramebufferAttachment * self) {
	return PyUnicode_FromFormat("<ModernGL.FramebufferAttachment>");
}

PyMethodDef MGLFramebufferAttachment_tp_methods[] = {
	{0},
};

PyGetSetDef MGLFramebufferAttachment_tp_getseters[] = {
	{0},
};

const char * MGLFramebufferAttachment_tp_doc = R"(
	FramebufferAttachment
)";

PyTypeObject MGLFramebufferAttachment_Type = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.FramebufferAttachment",                       // tp_name
	sizeof(MGLFramebufferAttachment),                       // tp_basicsize
	0,                                                      // tp_itemsize
	(destructor)MGLFramebufferAttachment_tp_dealloc,        // tp_dealloc
	0,                                                      // tp_print
	0,                                                      // tp_getattr
	0,                                                      // tp_setattr
	0,                                                      // tp_reserved
	(reprfunc)MGLFramebufferAttachment_tp_str,              // tp_repr
	0,                                                      // tp_as_number
	0,                                                      // tp_as_sequence
	0,                                                      // tp_as_mapping
	0,                                                      // tp_hash
	0,                                                      // tp_call
	(reprfunc)MGLFramebufferAttachment_tp_str,              // tp_str
	0,                                                      // tp_getattro
	0,                                                      // tp_setattro
	0,                                                      // tp_as_buffer
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,               // tp_flags
	MGLFramebufferAttachment_tp_doc,                        // tp_doc
	0,                                                      // tp_traverse
	0,                                                      // tp_clear
	0,                                                      // tp_richcompare
	0,                                                      // tp_weaklistoffset
	0,                                                      // tp_iter
	0,                                                      // tp_iternext
	MGLFramebufferAttachment_tp_methods,                    // tp_methods
	0,                                                      // tp_members
	MGLFramebufferAttachment_tp_getseters,                  // tp_getset
	&MGLObject_Type,                                        // tp_base
	0,                                                      // tp_dict
	0,                                                      // tp_descr_get
	0,                                                      // tp_descr_set
	0,                                                      // tp_dictoffset
	(initproc)MGLFramebufferAttachment_tp_init,             // tp_init
	0,                                                      // tp_alloc
	MGLFramebufferAttachment_tp_new,                        // tp_new
};

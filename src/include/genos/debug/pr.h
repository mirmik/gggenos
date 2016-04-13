#ifndef GENOS_DEBUG_PR_H
#define GENOS_DEBUG_PR_H

#include "asm/to_uint.h"
#include "genos/gstl/horrible_cast.h"


template<typename T> void dpr(T obj);
template<typename T> void dprbin(T obj);
template<typename T> void dprhex(T obj);

template<typename T> void dprptr(T* obj) 
	{ dprhex(static_cast<ptr_uint>(obj)); };

template<typename T> void dprln(T obj) 
	{ dpr(obj); dln; };

template<typename T> void dprbinln(T obj) 
	{ dprbin(obj); dln; };

template<typename T> void dprhexln(T obj) 
	{ dprhex(obj); dln; };

template<typename T> void dprptrln(T obj) 
	{ dprptr(obj); dln; };;

template<typename T> void dprhex_dump(T* obj, uint32_t size) { debug_print_dump((void*)obj, size); dpl; };

#endif
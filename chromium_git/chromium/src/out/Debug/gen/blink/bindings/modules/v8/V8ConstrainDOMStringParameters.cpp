// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8ConstrainDOMStringParameters.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8ConstrainDOMStringParameters::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ConstrainDOMStringParameters& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    {
        v8::Local<v8::Value> exactValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "exact")).ToLocal(&exactValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (exactValue.IsEmpty() || exactValue->IsUndefined()) {
            // Do nothing.
        } else {
            Vector<String> exact = toImplArray<Vector<String>>(exactValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setExact(exact);
        }
    }

    {
        v8::Local<v8::Value> idealValue;
        if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "ideal")).ToLocal(&idealValue)) {
            exceptionState.rethrowV8Exception(block.Exception());
            return;
        }
        if (idealValue.IsEmpty() || idealValue->IsUndefined()) {
            // Do nothing.
        } else {
            Vector<String> ideal = toImplArray<Vector<String>>(idealValue, 0, isolate, exceptionState);
            if (exceptionState.hadException())
                return;
            impl.setIdeal(ideal);
        }
    }

}

v8::Local<v8::Value> toV8(const ConstrainDOMStringParameters& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8ConstrainDOMStringParameters(impl, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8ConstrainDOMStringParameters(const ConstrainDOMStringParameters& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasExact()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "exact"), toV8(impl.exact(), creationContext, isolate))))
            return false;
    }

    if (impl.hasIdeal()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "ideal"), toV8(impl.ideal(), creationContext, isolate))))
            return false;
    }

    return true;
}

ConstrainDOMStringParameters NativeValueTraits<ConstrainDOMStringParameters>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ConstrainDOMStringParameters impl;
    V8ConstrainDOMStringParameters::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink

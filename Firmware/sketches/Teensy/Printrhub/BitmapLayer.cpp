//
// Created by Phillip Schuster on 19.01.16.
//

#include "BitmapLayer.h"
#include "Application.h"

BitmapLayer::BitmapLayer(Rect frame): Layer(frame)
{
    _bitmap = NULL;
    _alpha = 1;
}

BitmapLayer::~BitmapLayer()
{

}

void BitmapLayer::setBitmap(const uint16_t *bitmap, uint16_t width, uint16_t height)
{
    _bitmap = bitmap;
    _width = width;
    _height = height;
    _needsDisplay = true;
}

void BitmapLayer::draw()
{
    if (_bitmap == NULL) return;

    Display.drawBitmap(_frame.x,_frame.y,_bitmap,_width,_height,1);

    Layer::draw();
}


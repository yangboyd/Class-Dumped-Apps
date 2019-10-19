//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class NSArray, NSData;

@interface SCImageProcessNewportBoomboxRGBCommand : SCImageProcessCommand
{
    int _lookupTextureParam;
    int _alignmentParam;
    int _stabilizationParam;
    int _cameraParam;
    int _screenHeightParam;
    int _pixelDensityParam;
    int _borderSizeParam;
    struct CGSize _size;
    NSData *_lookupTable;
    unsigned int _lookupTexture;
    float _alignment[9];
    NSArray *_stabilization;
    unsigned long long _stereoCamera;
}

- (void).cxx_destruct;
- (unsigned int)_createTextureWithData:(const void *)arg1 pixelWidth:(unsigned int)arg2 pixelHeight:(unsigned int)arg3 textureUnit:(unsigned int)arg4 internalFormat:(unsigned int)arg5 pixelFormat:(unsigned int)arg6 type:(unsigned int)arg7;
- (_Bool)unloadWithError:(id *)arg1;
- (id)runWithContext:(id)arg1 pixelSize:(CDStruct_5e758c1a)arg2 bytesPerRow:(unsigned long long)arg3 outputPixelSize:(CDStruct_5e758c1a)arg4 renderRange:(CDStruct_b2fbf00d)arg5 orientation:(long long)arg6 viewportTransform:(struct CGAffineTransform)arg7 negativeSpaceColor:(id)arg8 error:(id *)arg9;
- (_Bool)loadWithContext:(id)arg1 error:(id *)arg2;
- (id)initWithLookupTable:(id)arg1 size:(struct CGSize)arg2 alignment:(id)arg3 stabilization:(id)arg4 stereoCamera:(unsigned long long)arg5;

@end


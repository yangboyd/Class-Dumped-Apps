//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEPixelBufferTransformer : NSObject
{
}

+ (struct __CVBuffer *)pixelBufferFromImage:(id)arg1;
+ (void)convertBGRAtoRGBA:(char *)arg1 withSize:(unsigned long long)arg2;
+ (id)imageFromCVPixelBufferRefForSystemPlayer:(struct __CVBuffer *)arg1;
+ (id)imageFromCVPixelBufferRefForTTPlayer:(struct __CVBuffer *)arg1;

@end


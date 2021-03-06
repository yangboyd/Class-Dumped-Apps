//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface InstabugScreenCapturer : NSObject
{
    CDUnknownBlockType _capturingHandler;
    UIImage *_testDefaultImage;
}

+ (struct CGSize)currentContextImageSize;
+ (id)captureImageFromLayer:(id)arg1;
+ (id)imageFromCurrentContext;
+ (long long)getInterfaceOrientation;
+ (id)getInstance;
@property(retain, nonatomic) UIImage *testDefaultImage; // @synthesize testDefaultImage=_testDefaultImage;
@property(copy, nonatomic) CDUnknownBlockType capturingHandler; // @synthesize capturingHandler=_capturingHandler;
- (void).cxx_destruct;
- (id)takeScreenshotFromView:(id)arg1 shouldRenderInContext:(_Bool)arg2;
- (id)takeScreenShotFromView:(id)arg1 filePath:(id)arg2 captureFrame:(struct CGRect)arg3 scaleFactor:(double)arg4 shouldSecure:(_Bool)arg5;
- (void)takeScreenshotOfWindow:(id)arg1 windowFrame:(struct CGRect)arg2 inContex:(inout struct CGContext *)arg3 shouldUseRenderInContext:(_Bool)arg4;
- (id)deleteNotValidWindows:(id)arg1;
- (id)screenWindows;
- (id)windowFromTouchEvent:(id)arg1;
- (void)takeScreenshotInContext:(inout struct CGContext **)arg1 shouldUseRenderInContext:(_Bool)arg2 annotator:(id)arg3 lastTouchedPoints:(id)arg4;
- (id)imageFromCompletionHandler:(CDUnknownBlockType)arg1;
- (id)takeScreenshotWithAnnotator:(id)arg1 shouldUseRenderInContext:(_Bool)arg2 lastTouchedPoints:(id)arg3;
- (id)init;

@end


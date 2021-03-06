//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class EAGLContext, HAMPixelBuffer, NSArray, NSDictionary;
@protocol HAMPixelBufferRenderingViewErrorDelegate, HAMPixelBufferRenderingViewFrameSizeDelegate;

@protocol HAMPixelBufferRenderingView <NSObject>
@property(readonly, nonatomic) _Bool prepared;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewFrameSizeDelegate> frameSizeDelegate;
@property(nonatomic) __weak id <HAMPixelBufferRenderingViewErrorDelegate> errorDelegate;
@property(readonly, nonatomic) NSArray *supportedPixelFormats;
@property(readonly, nonatomic) NSDictionary *requiredPixelBufferAttributes;
- (void)terminate;
- (void)clear;
- (void)reset;
- (void)appDidEnterBackground;
- (void)pixelBufferAttributesWillChange;
- (_Bool)renderPixelBuffer:(HAMPixelBuffer *)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;

@optional
- (void)setEAGLContext:(EAGLContext *)arg1;
@end


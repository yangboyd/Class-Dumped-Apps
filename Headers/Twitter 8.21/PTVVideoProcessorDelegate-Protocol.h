//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeSDK/NSObject-Protocol.h>

@class PTVVideoProcessor;

@protocol PTVVideoProcessorDelegate <NSObject>
- (_Bool)shouldSaveHighQuality;
- (void)videoProcessor:(PTVVideoProcessor *)arg1 didRenderBufferHQ:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
- (void)videoProcessor:(PTVVideoProcessor *)arg1 didRenderBuffer:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 captureContext:(CDStruct_4508418e)arg4;
@end


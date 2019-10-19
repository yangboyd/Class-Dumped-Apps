//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCExperimentManager;

@interface SCImageProcessColorFilterRequestFactory : NSObject
{
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)colorFilterRequestWithImageData:(id)arg1 histogramData:(id)arg2 pixelWidth:(unsigned long long)arg3 pixelHeight:(unsigned long long)arg4 preCommands:(id)arg5 commands:(id)arg6 colorFilterSessionCompletionHandler:(CDUnknownBlockType)arg7 renderer:(id)arg8 orientation:(long long)arg9 viewportTranform:(struct CGAffineTransform)arg10 croppingAspectRatio:(double)arg11 displayTimestamp:(double)arg12 backgroundColor:(id)arg13 completionHandler:(CDUnknownBlockType)arg14 colorFilterSessionId:(id)arg15;
- (id)initWithExperimentManager:(id)arg1;

@end


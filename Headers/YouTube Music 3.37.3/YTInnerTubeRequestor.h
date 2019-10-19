//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTBaseInnerTubeService;

@interface YTInnerTubeRequestor : NSObject
{
    YTBaseInnerTubeService *_innerTubeServiceStack;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)clearCaches;
- (CDUnknownBlockType)convertLegacyResponseBlock:(CDUnknownBlockType)arg1;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 valueHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4 retryEnabled:(_Bool)arg5 timeoutInterval:(double)arg6 enableLatencyTicks:(_Bool)arg7;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryEnabled:(_Bool)arg4 timeoutInterval:(double)arg5 enableLatencyTicks:(_Bool)arg6 mutableSharedData:(id)arg7 nilIdentityIsSignedOut:(_Bool)arg8;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 retryEnabled:(_Bool)arg4 timeoutInterval:(double)arg5 enableLatencyTicks:(_Bool)arg6 mutableSharedData:(id)arg7;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 retryEnabled:(_Bool)arg5 timeoutInterval:(double)arg6;
- (void)makeInnerTubeRequest:(id)arg1 withParser:(id)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4 retryEnabled:(_Bool)arg5;
- (id)init;

@end


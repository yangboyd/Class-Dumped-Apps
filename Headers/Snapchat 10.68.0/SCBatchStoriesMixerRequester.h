//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCExperimentManager, SCLazy, SCSessionRequestManager;

@interface SCBatchStoriesMixerRequester : NSObject
{
    SCSessionRequestManager *_requestManager;
    SCLazy *_snapTokenProvider;
    SCLazy *_endpointManager;
    SCExperimentManager *_experimentManager;
    NSString *_currentUserId;
}

- (void).cxx_destruct;
- (void)_fetchStoriesWithFeedType:(int)arg1 accessToken:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchStoriesWithFeedType:(int)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithRequestManager:(id)arg1 snapTokenProvider:(id)arg2 endpointManager:(id)arg3 experimentManager:(id)arg4 currentUserId:(id)arg5;

@end


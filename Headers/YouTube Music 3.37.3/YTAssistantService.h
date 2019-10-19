//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

#import "YTInnerTubeUIService-Protocol.h"

@class NSString, YTApiaryResourceParser;

@interface YTAssistantService : YTBaseInnerTubeRequestService <YTInnerTubeUIService>
{
    YTApiaryResourceParser *_resourceParser;
    long long _innerTubeAssistantService;
}

+ (long long)assistantServiceFromConfig:(id)arg1;
- (void).cxx_destruct;
- (void)clearCaches;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (Class)responseClass;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


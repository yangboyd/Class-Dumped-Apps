//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

#import "YTIAPHandlingService-Protocol.h"

@class NSString, YTApiaryResourceParser;

@interface YTYPCHandleIapService : YTBaseInnerTubeRequestService <YTIAPHandlingService>
{
    YTApiaryResourceParser *_resourceParser;
}

- (void).cxx_destruct;
- (_Bool)handlesTransactionType:(unsigned long long)arg1;
- (void)makeRequestWithProto:(id)arg1 innerTubeResponseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


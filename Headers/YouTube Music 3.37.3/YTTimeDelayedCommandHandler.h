//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTCommandHandler-Protocol.h"

@class GIMMe, NSMutableDictionary, NSString;

@interface YTTimeDelayedCommandHandler : NSObject <YTCommandHandler>
{
    NSMutableDictionary *_idToDispatchTimer;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)handleCancelTimeDelayedEndpoint:(id)arg1 entry:(id)arg2 sender:(id)arg3;
- (void)handleCreateTimeDelayedEndpoint:(id)arg1 entry:(id)arg2 sender:(id)arg3;
- (void)executeWithCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


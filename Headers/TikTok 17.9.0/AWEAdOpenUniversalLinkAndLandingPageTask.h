//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAdBasicTask.h"

#import "AWEAdOpenUniversalLinkAndLandingPageTaskProtocol-Protocol.h"

@class NSString;

@interface AWEAdOpenUniversalLinkAndLandingPageTask : AWEAdBasicTask <AWEAdOpenUniversalLinkAndLandingPageTaskProtocol>
{
    _Bool _disableTrackOpenUniversalLinkFailed;
    CDUnknownBlockType _openOtherAppResult;
}

+ (_Bool)isToAppStoreRequestURLStr:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool disableTrackOpenUniversalLinkFailed; // @synthesize disableTrackOpenUniversalLinkFailed=_disableTrackOpenUniversalLinkFailed;
@property(copy, nonatomic) CDUnknownBlockType openOtherAppResult; // @synthesize openOtherAppResult=_openOtherAppResult;
- (id)replaceBackURLWithCreativeID:(id)arg1 groupID:(id)arg2 logExtra:(id)arg3 eventName:(id)arg4 label:(id)arg5 extra:(id)arg6 disableTrack:(_Bool)arg7;
- (void)taskDidExecutedWithResult:(_Bool)arg1;
- (_Bool)taskExecute;
- (void)taskWillExecute;
- (_Bool)shouldBeExecuted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


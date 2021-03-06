//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "IESLiveMTAnchorActions-Protocol.h"
#import "IESLiveMTAudienceActions-Protocol.h"

@class NSString, RACCompoundDisposable;

@interface IESLiveMTRoomActionsFragment : NSObject <IESLiveMTAudienceActions, IESLiveMTAnchorActions, HTSLiveComponent>
{
    RACCompoundDisposable *_disposable;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) RACCompoundDisposable *disposable; // @synthesize disposable=_disposable;
- (void)receiveError:(id)arg1 withPrompts:(id)arg2;
- (void)willStopLive;
- (void)stopLive;
- (void)startLive;
- (void)liveDidCloseAllRoom;
- (void)liveWillEnd;
- (void)liveWillStart;
- (void)recorderControllerDidAppear;
- (void)_setupActions;
- (void)componentDidUnmount;
- (void)componentDidMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


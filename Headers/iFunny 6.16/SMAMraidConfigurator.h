//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMARichMediaViewConfiguring-Protocol.h>

@class NSString;

@interface SMAMraidConfigurator : NSObject <SMARichMediaViewConfiguring>
{
}

- (id)createIABPolicy;
- (id)createMraidJSEngine;
- (id)buildStateMachineForInterstitial;
- (id)buildStateMachineForBanner;
- (id)createMraidViewModelWithStateMachine:(id)arg1 placementType:(unsigned long long)arg2;
- (id)createMraidContainerWithViewModel:(id)arg1 size:(struct CGSize)arg2 placementType:(unsigned long long)arg3;
- (id)createViewWithSize:(struct CGSize)arg1 placementType:(unsigned long long)arg2 stateMachine:(id)arg3;
- (id)createRichMediaInterstitialViewWithSize:(struct CGSize)arg1;
- (id)createRichMediaViewWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBContentOperation-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"

@class NSString;
@protocol HUBContentOperationDelegate, SPTPlayer;

@interface SPTHomeQuickPlayRecentlyPlayedDecoratorContentOperation : NSObject <SPTPlayerObserver, HUBContentOperation>
{
    id <HUBContentOperationDelegate> delegate;
    id <SPTPlayer> _player;
}

@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (_Bool)isActivePlayerContextURI:(id)arg1;
- (void)decorateRecentlyPlayedInViewModelBuilder:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)performForViewModelBuilder:(id)arg1 previousError:(id)arg2;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


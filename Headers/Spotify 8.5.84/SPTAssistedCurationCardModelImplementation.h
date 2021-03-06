//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardModel-Protocol.h"
#import "SPTAssistedCurationCardModelProviderInterface-Protocol.h"

@class NSMutableArray, NSString;
@protocol SPTAssistedCurationCardModelActionsDelegate, SPTAssistedCurationCardModelDelegate, SPTAssistedCurationCardModelProviderInterfaceDelegate;

@interface SPTAssistedCurationCardModelImplementation : NSObject <SPTAssistedCurationCardModel, SPTAssistedCurationCardModelProviderInterface>
{
    NSString *_title;
    id <SPTAssistedCurationCardModelDelegate> _delegate;
    id <SPTAssistedCurationCardModelActionsDelegate> _actionsDelegate;
    id <SPTAssistedCurationCardModelProviderInterfaceDelegate> _providerDelegate;
    NSString *_providerIdentifier;
    NSString *_loggingIdentifier;
    NSMutableArray *_tracks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, copy, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_loggingIdentifier;
@property(readonly, copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic) __weak id <SPTAssistedCurationCardModelProviderInterfaceDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property(nonatomic) __weak id <SPTAssistedCurationCardModelActionsDelegate> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(nonatomic) __weak id <SPTAssistedCurationCardModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)insertTracks:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)appendTracks:(id)arg1;
- (void)loadMore;
- (void)addTrackAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasMore;
- (id)trackAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTracks;
- (id)initWithTracks:(id)arg1 title:(id)arg2 providerIdentifier:(id)arg3 loggingIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


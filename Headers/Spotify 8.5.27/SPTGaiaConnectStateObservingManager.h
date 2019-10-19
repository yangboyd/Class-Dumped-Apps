//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTGaiaConnectCosmosResolver, SPTObserverManager;

@interface SPTGaiaConnectStateObservingManager : NSObject
{
    _Bool _isObservingChanges;
    SPTGaiaConnectCosmosResolver *_resolver;
    SPTObserverManager *_observers;
}

@property(nonatomic) _Bool isObservingChanges; // @synthesize isObservingChanges=_isObservingChanges;
@property(retain, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SPTGaiaConnectCosmosResolver *resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)observeVolume;
- (void)observeDevices;
- (void)startObservingStateChanges;
- (id)initWithResolver:(id)arg1;

@end


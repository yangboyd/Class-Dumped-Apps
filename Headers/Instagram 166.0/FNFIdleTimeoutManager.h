//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol FBIdleTimerApplicationProtocol;

@interface FNFIdleTimeoutManager : NSObject
{
    struct mutex _lock;
    NSHashTable *_clients;
    id <FBIdleTimerApplicationProtocol> _application;
    _Bool _isIdleTimerDisabled;
    _Bool _shouldResetIdleTimerToInitialValue;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldResetIdleTimerToInitialValue; // @synthesize shouldResetIdleTimerToInitialValue=_shouldResetIdleTimerToInitialValue;
- (void)_setApplication:(id)arg1;
- (void)removeNonIdlingClient:(id)arg1;
- (void)addNonIdlingClient:(id)arg1;
- (id)init;

@end


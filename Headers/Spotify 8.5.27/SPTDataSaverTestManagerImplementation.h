//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataSaverTestManager-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagSignal;

@interface SPTDataSaverTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTDataSaverTestManager>
{
    id <SPTFeatureFlagSignal> _dataSaverFlagSignal;
    long long _dataSaverFlagState;
}

@property(nonatomic) long long dataSaverFlagState; // @synthesize dataSaverFlagState=_dataSaverFlagState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> dataSaverFlagSignal; // @synthesize dataSaverFlagSignal=_dataSaverFlagSignal;
- (void).cxx_destruct;
- (_Bool)isFeatureEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupFlags:(id)arg1;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


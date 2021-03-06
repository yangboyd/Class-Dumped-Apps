//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRInstallationsBackoffControllerProtocol-Protocol.h"

@class FIRInstallationsBackoffEventData, NSString;

@interface FIRInstallationsBackoffController : NSObject <FIRInstallationsBackoffControllerProtocol>
{
    CDUnknownBlockType _currentDateProvider;
    FIRInstallationsBackoffEventData *_lastEventData;
}

@property(retain, nonatomic) FIRInstallationsBackoffEventData *lastEventData; // @synthesize lastEventData=_lastEventData;
@property(readonly, nonatomic) CDUnknownBlockType currentDateProvider; // @synthesize currentDateProvider=_currentDateProvider;
- (void).cxx_destruct;
- (void)registerEvent:(long long)arg1;
- (_Bool)isNextRequestAllowed;
- (id)initWithCurrentDateProvider:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


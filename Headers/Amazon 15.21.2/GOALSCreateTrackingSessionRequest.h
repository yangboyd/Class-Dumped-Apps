//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOALSSerializable-Protocol.h"

@class NSString;

@interface GOALSCreateTrackingSessionRequest : NSObject <GOALSSerializable>
{
    NSString *_applicationInstallId;
    NSString *_targetedRegionMonitorId;
    NSString *_clientId;
}

@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *targetedRegionMonitorId; // @synthesize targetedRegionMonitorId=_targetedRegionMonitorId;
@property(retain, nonatomic) NSString *applicationInstallId; // @synthesize applicationInstallId=_applicationInstallId;
- (void).cxx_destruct;
- (id)toDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


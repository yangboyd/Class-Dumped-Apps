//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GOALSPutTargetedRegionMonitorRequest : NSObject
{
    NSString *_clientId;
    NSString *_clientTargetedRegionMonitorId;
    NSString *_baseRegionMonitorId;
}

@property(readonly, nonatomic) NSString *baseRegionMonitorId; // @synthesize baseRegionMonitorId=_baseRegionMonitorId;
@property(readonly, nonatomic) NSString *clientTargetedRegionMonitorId; // @synthesize clientTargetedRegionMonitorId=_clientTargetedRegionMonitorId;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
- (void).cxx_destruct;
- (id)initWithClientId:(id)arg1 clientTargetedRegionMonitorId:(id)arg2 baseRegionMonitorId:(id)arg3;

@end


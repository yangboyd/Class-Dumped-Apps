//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMECameraClipInfoItem-Protocol.h"

@class GHCActivityZone, NSString;

@interface HMECameraClipInfoActivityZoneItem : NSObject <HMECameraClipInfoItem>
{
    GHCActivityZone *_activityZone;
}

@property(readonly, nonatomic) GHCActivityZone *activityZone; // @synthesize activityZone=_activityZone;
- (void).cxx_destruct;
- (id)image;
- (id)title;
- (long long)type;
@property(readonly, nonatomic, getter=isDefaultZone) _Bool defaultZone;
- (id)zoneColor;
- (id)initWithActivityZone:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


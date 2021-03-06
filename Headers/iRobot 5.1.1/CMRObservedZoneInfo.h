//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CMRObservedZoneInfo : NSObject
{
    NSString *_zoneId;
    NSString *_zoneNameId;
    NSString *_zoneLocation;
    NSString *_zoneTypeTextId;
    NSString *_zoneIconId;
}

+ (id)ObservedZoneInfoWithZoneId:(id)arg1 zoneNameId:(id)arg2 zoneLocation:(id)arg3 zoneTypeTextId:(id)arg4 zoneIconId:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *zoneIconId; // @synthesize zoneIconId=_zoneIconId;
@property(readonly, nonatomic) NSString *zoneTypeTextId; // @synthesize zoneTypeTextId=_zoneTypeTextId;
@property(readonly, nonatomic) NSString *zoneLocation; // @synthesize zoneLocation=_zoneLocation;
@property(readonly, nonatomic) NSString *zoneNameId; // @synthesize zoneNameId=_zoneNameId;
@property(readonly, nonatomic) NSString *zoneId; // @synthesize zoneId=_zoneId;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithZoneId:(id)arg1 zoneNameId:(id)arg2 zoneLocation:(id)arg3 zoneTypeTextId:(id)arg4 zoneIconId:(id)arg5;

@end


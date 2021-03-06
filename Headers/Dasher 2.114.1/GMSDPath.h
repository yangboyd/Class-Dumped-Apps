//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NavigationFramework/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface GMSDPath : NSObject <NSSecureCoding>
{
    int _travelMode;
    int _distanceMeters;
    int _durationFreeFlowSeconds;
    int _durationTrafficSeconds;
    int _delayCategory;
    NSArray *_steps;
    NSArray *_stepGroups;
    NSString *_summary;
    NSString *_destinationTimeZone;
    long long _recommendedDistanceUnits;
    NSArray *_notices;
}

+ (id)propertiesToSkipForSerialization;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *notices; // @synthesize notices=_notices;
@property(readonly, nonatomic) long long recommendedDistanceUnits; // @synthesize recommendedDistanceUnits=_recommendedDistanceUnits;
@property(readonly, nonatomic) int delayCategory; // @synthesize delayCategory=_delayCategory;
@property(readonly, nonatomic) int durationTrafficSeconds; // @synthesize durationTrafficSeconds=_durationTrafficSeconds;
@property(readonly, nonatomic) int durationFreeFlowSeconds; // @synthesize durationFreeFlowSeconds=_durationFreeFlowSeconds;
@property(readonly, nonatomic) int distanceMeters; // @synthesize distanceMeters=_distanceMeters;
@property(readonly, nonatomic) NSString *destinationTimeZone; // @synthesize destinationTimeZone=_destinationTimeZone;
@property(readonly, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(readonly, nonatomic) NSArray *stepGroups; // @synthesize stepGroups=_stepGroups;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) int travelMode; // @synthesize travelMode=_travelMode;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) int durationSeconds;
@property(readonly, nonatomic) struct GMSCoordinate toCoordinate;
@property(readonly, nonatomic) struct GMSCoordinate fromCoordinate;
@property(readonly, nonatomic) unsigned long long endPointIndex;
@property(readonly, nonatomic) unsigned long long startPointIndex;
- (id)pathWithDelayCategory:(int)arg1;
- (id)initWithTravelMode:(int)arg1 steps:(id)arg2 stepGroups:(id)arg3 summary:(id)arg4 destinationTimeZone:(id)arg5 distanceMeters:(int)arg6 durationFreeFlowSeconds:(int)arg7 durationTrafficSeconds:(int)arg8 delayCategory:(int)arg9 recommendedDistanceUnits:(long long)arg10 notices:(id)arg11;

@end


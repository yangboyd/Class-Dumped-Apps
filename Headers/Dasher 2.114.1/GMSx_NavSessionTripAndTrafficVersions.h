//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSx_NavSessionTripAndTrafficVersions : NSObject
{
    int _tripVersion;
    int _trafficVersion;
}

@property(readonly, nonatomic) int trafficVersion; // @synthesize trafficVersion=_trafficVersion;
@property(readonly, nonatomic) int tripVersion; // @synthesize tripVersion=_tripVersion;
- (void)updateToMatch:(id)arg1;
- (id)copyForNextTrafficVersion;
- (id)copyForNextTripVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTripVersion:(int)arg1 trafficVersion:(int)arg2;
- (id)init;

@end


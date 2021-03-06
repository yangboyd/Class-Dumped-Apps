//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface GMSx_RoadList : NSObject
{
    NSMutableArray *_roads;
    NSMutableArray *_roadCenterlines;
    NSMutableArray *_polylines;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *polylines; // @synthesize polylines=_polylines;
@property(readonly, nonatomic) NSArray *roadCenterlines; // @synthesize roadCenterlines=_roadCenterlines;
@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;
- (void)clear;
- (void)addRoad:(id)arg1 centerline:(id)arg2 polyline:(id)arg3;
- (unsigned long long)count;
- (id)description;
- (id)init;

@end


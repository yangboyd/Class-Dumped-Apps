//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSDLocationProjection : NSObject
{
    int _index;
    struct GMSPoint2D _position;
    double _bearing;
    double _distance;
}

+ (id)locationProjectionForPoint:(struct GMSPoint2D)arg1 polyline:(id)arg2;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) double bearing; // @synthesize bearing=_bearing;
@property(readonly, nonatomic) struct GMSPoint2D position; // @synthesize position=_position;
- (id)copyWithDistance:(double)arg1;
- (id)description;
- (id)initWithPosition:(struct GMSPoint2D)arg1 bearing:(double)arg2 distance:(double)arg3 index:(int)arg4;

@end


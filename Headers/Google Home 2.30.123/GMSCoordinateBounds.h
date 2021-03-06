//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSCoordinateBounds : NSObject
{
    struct CLLocationCoordinate2D _northEast;
    struct CLLocationCoordinate2D _southWest;
}

@property(nonatomic) struct CLLocationCoordinate2D southWest; // @synthesize southWest=_southWest;
@property(nonatomic) struct CLLocationCoordinate2D northEast; // @synthesize northEast=_northEast;
- (void)updateIncludingBoundsSouthWest:(struct CLLocationCoordinate2D)arg1 northEast:(struct CLLocationCoordinate2D)arg2;
- (void)updateIncludingCoordinate:(struct CLLocationCoordinate2D)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (struct CLLocationCoordinate2D)center;
- (id)initWithSouthWest:(struct CLLocationCoordinate2D)arg1 northEast:(struct CLLocationCoordinate2D)arg2;
- (id)includingBounds:(id)arg1;
- (id)includingCoordinate:(struct CLLocationCoordinate2D)arg1;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)intersectsBounds:(id)arg1;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
- (id)init;
- (struct WrappedRectangle2D)rectangle;
- (id)clampLatitudeCopy;
- (id)includingPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithRegion:(CDStruct_165487e6)arg1;

@end


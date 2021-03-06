//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface FOABezierPathSegment : NSObject
{
    long long _type;
    NSArray *_points;
}

+ (id)newWithType:(long long)arg1 points:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *points; // @synthesize points=_points;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)pointsThatIntersectSegment:(id)arg1;
- (id)split;
- (struct CGPoint)positionAtTime:(double)arg1;
@property(readonly, nonatomic) struct CGRect boundingBox;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ATRPoint : NSObject
{
    int _floor;
    double _x;
    double _y;
}

@property(nonatomic) int floor; // @synthesize floor=_floor;
@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (unsigned long long)hash;
- (_Bool)isEqualToPosition:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2 floor:(int)arg3;

@end


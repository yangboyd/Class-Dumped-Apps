//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GAVPathSegment : NSObject
{
    _Bool _isArc;
    NSMutableArray *_points;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isArc; // @synthesize isArc=_isArc;
@property(readonly, nonatomic) NSMutableArray *points; // @synthesize points=_points;
- (id)init;

@end


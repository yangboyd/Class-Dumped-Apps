//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAVAxisView.h"

@protocol GAVRangedScale;

@interface GAVOrdinalAxisView : GAVAxisView
{
    id <GAVRangedScale> _scale;
}

- (void).cxx_destruct;
- (void)setScale:(id)arg1;
- (id)scale;
- (void)removeAllValues;
- (id)initWithFrame:(struct CGRect)arg1 axis:(id)arg2 chartLayout:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTAnimatedNode.h"

@protocol RCTValueAnimatedNodeObserver;

@interface RCTValueAnimatedNode : RCTAnimatedNode
{
    double _value;
    id <RCTValueAnimatedNodeObserver> _valueObserver;
    double _offset;
}

@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) __weak id <RCTValueAnimatedNodeObserver> valueObserver; // @synthesize valueObserver=_valueObserver;
- (void).cxx_destruct;
@property(nonatomic) double value; // @synthesize value=_value;
- (void)extractOffset;
- (void)flattenOffset;
- (id)initWithTag:(id)arg1 config:(id)arg2;

@end


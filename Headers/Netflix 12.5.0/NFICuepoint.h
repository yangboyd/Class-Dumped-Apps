//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface NFICuepoint : NSObject <NSCopying>
{
    _Bool _active;
    double _startTimeMS;
    double _endTimeMS;
    long long _type;
    CDUnknownBlockType _triggerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType triggerBlock; // @synthesize triggerBlock=_triggerBlock;
@property(readonly) _Bool active; // @synthesize active=_active;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly) double endTimeMS; // @synthesize endTimeMS=_endTimeMS;
@property(readonly) double startTimeMS; // @synthesize startTimeMS=_startTimeMS;
- (void).cxx_destruct;
- (id)description;
- (_Bool)timeWithinRange:(double)arg1;
- (_Bool)timeExceeded:(double)arg1;
- (_Bool)isOutOfRange:(double)arg1;
- (_Bool)shouldTrigger:(double)arg1;
- (_Bool)containsTime:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStart:(double)arg1 end:(double)arg2;

@end


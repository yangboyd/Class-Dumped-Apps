//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSURL;

@interface YTAdProgressPing : NSObject <NSCopying>
{
    double _timeOffset;
    double _percentageOffset;
    int _type;
    NSURL *_pingURL;
}

@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) NSURL *pingURL; // @synthesize pingURL=_pingURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double percentageOffset;
@property(readonly, nonatomic) double timeOffset;
- (id)initUnknownPing;
- (id)initWithPingURL:(id)arg1 timeOffset:(double)arg2;
- (id)initWithPingURL:(id)arg1 percentageOffset:(double)arg2;

@end


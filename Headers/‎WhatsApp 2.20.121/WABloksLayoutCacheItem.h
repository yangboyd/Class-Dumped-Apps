//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface WABloksLayoutCacheItem : NSObject
{
    double _timestamp;
    NSData *_data;
}

+ (id)itemWithDataWithCurrentTimestamp:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)initWithData:(id)arg1 timestamp:(double)arg2;

@end


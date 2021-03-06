//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/DSCStreamCoding-Protocol.h>
#import <ChromeInternal/NSCopying-Protocol.h>

@class NSData, NSString;

@interface DSCTNGAction : NSObject <NSCopying, DSCStreamCoding>
{
    long long _timestamp;
    long long _sequenceNumber;
    NSData *_payload;
    long long _durationMillis;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long durationMillis; // @synthesize durationMillis=_durationMillis;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
- (_Bool)encodeToStream:(id)arg1 error:(id *)arg2;
- (id)initWithStream:(id)arg1 error:(id *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTimestamp:(long long)arg1 sequenceNumber:(long long)arg2 payload:(id)arg3 durationMillis:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


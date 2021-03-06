//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/NSCoding-Protocol.h>

@class NSString, WAChatEntryPointRecord;

@interface WABizOptOutInfo : NSObject <NSCoding>
{
    NSString *_reason;
    unsigned long long _origin;
    WAChatEntryPointRecord *_entryPointRecord;
    long long _incomingMessagesCountBeforeBlock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long incomingMessagesCountBeforeBlock; // @synthesize incomingMessagesCountBeforeBlock=_incomingMessagesCountBeforeBlock;
@property(readonly, nonatomic) WAChatEntryPointRecord *entryPointRecord; // @synthesize entryPointRecord=_entryPointRecord;
@property(readonly, nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (_Bool)isEqualToBizOptOutInfo:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReason:(id)arg1 origin:(unsigned long long)arg2 incomingMessagesCountBeforeBlock:(long long)arg3 entryPointRecord:(id)arg4;

@end


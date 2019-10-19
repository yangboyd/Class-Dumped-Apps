//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatAddressMediaCardContent-Protocol.h"

@class NSString;

@interface SCChatAddressMediaCardContent : NSObject <SCChatAddressMediaCardContent>
{
    NSString *_address;
    NSString *_cacheId;
    long long _thumbnailLoadState;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long thumbnailLoadState; // @synthesize thumbnailLoadState=_thumbnailLoadState;
@property(readonly, copy, nonatomic) NSString *cacheId; // @synthesize cacheId=_cacheId;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAddress:(id)arg1 cacheId:(id)arg2 thumbnailLoadState:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


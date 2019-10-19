//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBitmojiLensAsset-Protocol.h"

@class NSArray, NSString;

@interface SOJUBitmojiLensAsset : NSObject <SOJUBitmojiLensAsset>
{
    NSString *_idValue;
    NSString *_url;
    NSString *_signature;
    NSString *_contentSignature;
    NSArray *_storageOptions;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *storageOptions; // @synthesize storageOptions=_storageOptions;
@property(readonly, copy, nonatomic) NSString *contentSignature; // @synthesize contentSignature=_contentSignature;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 url:(id)arg2 signature:(id)arg3 contentSignature:(id)arg4 storageOptions:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


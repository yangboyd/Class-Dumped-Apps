//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesGtqUnlockablesResponse-Protocol.h"

@class NSArray, NSString, SOJUAdOpportunityRequestIds;

@interface SOJUUnlockablesGtqUnlockablesResponse : NSObject <SOJUUnlockablesGtqUnlockablesResponse>
{
    NSArray *_filters;
    NSArray *_invalidFilterIds;
    NSArray *_bitmojiFilters;
    NSArray *_lenses;
    NSArray *_prefetchLenses;
    NSArray *_stickers;
    NSArray *_purposes;
    SOJUAdOpportunityRequestIds *_opportunityRequestIds;
    NSArray *_assetPrecachedFilters;
    NSArray *_previewCaptionStyles;
    NSArray *_checksumResponseList;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *checksumResponseList; // @synthesize checksumResponseList=_checksumResponseList;
@property(readonly, copy, nonatomic) NSArray *previewCaptionStyles; // @synthesize previewCaptionStyles=_previewCaptionStyles;
@property(readonly, copy, nonatomic) NSArray *assetPrecachedFilters; // @synthesize assetPrecachedFilters=_assetPrecachedFilters;
@property(readonly, copy, nonatomic) SOJUAdOpportunityRequestIds *opportunityRequestIds; // @synthesize opportunityRequestIds=_opportunityRequestIds;
@property(readonly, copy, nonatomic) NSArray *purposes; // @synthesize purposes=_purposes;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
@property(readonly, copy, nonatomic) NSArray *prefetchLenses; // @synthesize prefetchLenses=_prefetchLenses;
@property(readonly, copy, nonatomic) NSArray *lenses; // @synthesize lenses=_lenses;
@property(readonly, copy, nonatomic) NSArray *bitmojiFilters; // @synthesize bitmojiFilters=_bitmojiFilters;
@property(readonly, copy, nonatomic) NSArray *invalidFilterIds; // @synthesize invalidFilterIds=_invalidFilterIds;
@property(readonly, copy, nonatomic) NSArray *filters; // @synthesize filters=_filters;
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
- (id)initWithFilters:(id)arg1 invalidFilterIds:(id)arg2 bitmojiFilters:(id)arg3 lenses:(id)arg4 prefetchLenses:(id)arg5 stickers:(id)arg6 purposes:(id)arg7 opportunityRequestIds:(id)arg8 assetPrecachedFilters:(id)arg9 previewCaptionStyles:(id)arg10 checksumResponseList:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


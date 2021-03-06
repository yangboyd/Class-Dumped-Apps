//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

@class NSArray, UIImage;

@interface MXGImageGroup : MTLModel
{
    NSArray *_assets;
    UIImage *_stitchedImage;
    NSArray *_alignments;
    long long _status;
    long long _cacheStatus;
    unsigned long long _cachedHash;
}

+ (id)encodingBehaviorsByPropertyKey;
+ (id)groupWithAssets:(id)arg1;
@property(readonly, nonatomic) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(nonatomic) long long cacheStatus; // @synthesize cacheStatus=_cacheStatus;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *alignments; // @synthesize alignments=_alignments;
@property(copy, nonatomic) UIImage *stitchedImage; // @synthesize stitchedImage=_stitchedImage;
@property(readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
- (void).cxx_destruct;
- (unsigned long long)uncachedHash;
- (id)hashDescription;
- (struct CGSize)sizeForImageAtIndex:(long long)arg1;
- (void)fetchStitchedThumbnailWithCompletion:(CDUnknownBlockType)arg1;
- (id)groupWithStitchedImage:(id)arg1 alignments:(id)arg2 status:(long long)arg3 cacheStatus:(long long)arg4;
- (_Bool)reversed;
- (id)normalizedGroup;
@property(readonly, nonatomic) _Bool complete;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToImageGroup:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAssets:(id)arg1;

@end


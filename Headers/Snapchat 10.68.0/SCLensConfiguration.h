//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensConfiguration-Protocol.h"

@class NSString, SCLens, SCLensSbSnappable;

@interface SCLensConfiguration : NSObject <SCLensConfiguration>
{
    SCLens *_lens;
    NSString *_lensOptionId;
    long long _faceFrontCameraCount;
    long long _faceBackCameraCount;
    long long _lensIndexPos;
    long long _lensIndexCount;
    NSString *_lensApplicableContext;
    NSString *_sceneIntelligenceRequestId;
    SCLensSbSnappable *_snappableMetadata;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)sceneIntelligenceRequestIdForLensConfigurations:(id)arg1;
+ (id)lensInfoForLensConfigurations:(id)arg1;
@property(readonly, copy, nonatomic) SCLensSbSnappable *snappableMetadata; // @synthesize snappableMetadata=_snappableMetadata;
@property(readonly, copy, nonatomic) NSString *sceneIntelligenceRequestId; // @synthesize sceneIntelligenceRequestId=_sceneIntelligenceRequestId;
@property(readonly, copy, nonatomic) NSString *lensApplicableContext; // @synthesize lensApplicableContext=_lensApplicableContext;
@property(readonly, nonatomic) long long lensIndexCount; // @synthesize lensIndexCount=_lensIndexCount;
@property(readonly, nonatomic) long long lensIndexPos; // @synthesize lensIndexPos=_lensIndexPos;
@property(readonly, nonatomic) long long faceBackCameraCount; // @synthesize faceBackCameraCount=_faceBackCameraCount;
@property(readonly, nonatomic) long long faceFrontCameraCount; // @synthesize faceFrontCameraCount=_faceFrontCameraCount;
@property(readonly, copy, nonatomic) NSString *lensOptionId; // @synthesize lensOptionId=_lensOptionId;
@property(readonly, copy, nonatomic) SCLens *lens; // @synthesize lens=_lens;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLens:(id)arg1 lensOptionId:(id)arg2 faceFrontCameraCount:(long long)arg3 faceBackCameraCount:(long long)arg4 lensIndexPos:(long long)arg5 lensIndexCount:(long long)arg6 lensApplicableContext:(id)arg7 sceneIntelligenceRequestId:(id)arg8 snappableMetadata:(id)arg9;
- (id)asLensMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandAsset-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandAssetDraft, SOJUUnlockablesOndemandImageFilter;

@interface SOJUUnlockablesOndemandAsset : NSObject <SOJUUnlockablesOndemandAsset>
{
    NSString *_idValue;
    SOJUUnlockablesOndemandImageFilter *_imageFilter;
    NSString *_name;
    NSNumber *_scheduledStart;
    NSNumber *_scheduledEnd;
    NSNumber *_submissionTime;
    NSString *_status;
    NSString *_productType;
    SOJUUnlockablesOndemandImageFilter *_lensPreviewThumbnailImage;
    SOJUUnlockablesOndemandAssetDraft *_assetDraft;
    NSNumber *_isUpdate;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *isUpdate; // @synthesize isUpdate=_isUpdate;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAssetDraft *assetDraft; // @synthesize assetDraft=_assetDraft;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandImageFilter *lensPreviewThumbnailImage; // @synthesize lensPreviewThumbnailImage=_lensPreviewThumbnailImage;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSNumber *submissionTime; // @synthesize submissionTime=_submissionTime;
@property(readonly, copy, nonatomic) NSNumber *scheduledEnd; // @synthesize scheduledEnd=_scheduledEnd;
@property(readonly, copy, nonatomic) NSNumber *scheduledStart; // @synthesize scheduledStart=_scheduledStart;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandImageFilter *imageFilter; // @synthesize imageFilter=_imageFilter;
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
- (id)initWithIdValue:(id)arg1 imageFilter:(id)arg2 name:(id)arg3 scheduledStart:(id)arg4 scheduledEnd:(id)arg5 submissionTime:(id)arg6 status:(id)arg7 productType:(id)arg8 lensPreviewThumbnailImage:(id)arg9 assetDraft:(id)arg10 isUpdate:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isUpdateValue;
- (long long)productTypeEnum;
- (long long)statusEnum;
- (long long)submissionTimeValue;
- (long long)scheduledEndValue;
- (long long)scheduledStartValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


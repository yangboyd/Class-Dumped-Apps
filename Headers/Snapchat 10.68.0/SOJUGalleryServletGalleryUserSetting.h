//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletGalleryUserSetting-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletGalleryUserSetting : NSObject <SOJUGalleryServletGalleryUserSetting>
{
    NSNumber *_storyAutoSaving;
    NSNumber *_autoSaveToCameraRoll;
    NSNumber *_backupOnCellular;
    NSNumber *_privateGalleryEnabled;
    NSNumber *_topSecretPrivateGalleryEnabled;
    NSNumber *_saveToPrivateGalleryByDefault;
    NSString *_snapSaveOption;
    NSNumber *_entriesToPrefetchGrid;
    NSNumber *_entriesToPrefetchBrowse;
    NSNumber *_minMediaCacheSize;
    NSNumber *_mediaCachePercentage;
    NSNumber *_swipedIntoMemoriesPage;
    NSNumber *_forceSyncRequired;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *forceSyncRequired; // @synthesize forceSyncRequired=_forceSyncRequired;
@property(readonly, copy, nonatomic) NSNumber *swipedIntoMemoriesPage; // @synthesize swipedIntoMemoriesPage=_swipedIntoMemoriesPage;
@property(readonly, copy, nonatomic) NSNumber *mediaCachePercentage; // @synthesize mediaCachePercentage=_mediaCachePercentage;
@property(readonly, copy, nonatomic) NSNumber *minMediaCacheSize; // @synthesize minMediaCacheSize=_minMediaCacheSize;
@property(readonly, copy, nonatomic) NSNumber *entriesToPrefetchBrowse; // @synthesize entriesToPrefetchBrowse=_entriesToPrefetchBrowse;
@property(readonly, copy, nonatomic) NSNumber *entriesToPrefetchGrid; // @synthesize entriesToPrefetchGrid=_entriesToPrefetchGrid;
@property(readonly, copy, nonatomic) NSString *snapSaveOption; // @synthesize snapSaveOption=_snapSaveOption;
@property(readonly, copy, nonatomic) NSNumber *saveToPrivateGalleryByDefault; // @synthesize saveToPrivateGalleryByDefault=_saveToPrivateGalleryByDefault;
@property(readonly, copy, nonatomic) NSNumber *topSecretPrivateGalleryEnabled; // @synthesize topSecretPrivateGalleryEnabled=_topSecretPrivateGalleryEnabled;
@property(readonly, copy, nonatomic) NSNumber *privateGalleryEnabled; // @synthesize privateGalleryEnabled=_privateGalleryEnabled;
@property(readonly, copy, nonatomic) NSNumber *backupOnCellular; // @synthesize backupOnCellular=_backupOnCellular;
@property(readonly, copy, nonatomic) NSNumber *autoSaveToCameraRoll; // @synthesize autoSaveToCameraRoll=_autoSaveToCameraRoll;
@property(readonly, copy, nonatomic) NSNumber *storyAutoSaving; // @synthesize storyAutoSaving=_storyAutoSaving;
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
- (id)initWithStoryAutoSaving:(id)arg1 autoSaveToCameraRoll:(id)arg2 backupOnCellular:(id)arg3 privateGalleryEnabled:(id)arg4 topSecretPrivateGalleryEnabled:(id)arg5 saveToPrivateGalleryByDefault:(id)arg6 snapSaveOption:(id)arg7 entriesToPrefetchGrid:(id)arg8 entriesToPrefetchBrowse:(id)arg9 minMediaCacheSize:(id)arg10 mediaCachePercentage:(id)arg11 swipedIntoMemoriesPage:(id)arg12 forceSyncRequired:(id)arg13;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)forceSyncRequiredValue;
- (_Bool)swipedIntoMemoriesPageValue;
- (double)mediaCachePercentageValue;
- (long long)minMediaCacheSizeValue;
- (int)entriesToPrefetchBrowseValue;
- (int)entriesToPrefetchGridValue;
- (long long)snapSaveOptionEnum;
- (_Bool)saveToPrivateGalleryByDefaultValue;
- (_Bool)topSecretPrivateGalleryEnabledValue;
- (_Bool)privateGalleryEnabledValue;
- (_Bool)backupOnCellularValue;
- (_Bool)autoSaveToCameraRollValue;
- (_Bool)storyAutoSavingValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


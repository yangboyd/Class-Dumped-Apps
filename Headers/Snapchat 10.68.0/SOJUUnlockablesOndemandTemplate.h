//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandTemplate-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGeofilterResponse;

@interface SOJUUnlockablesOndemandTemplate : NSObject <SOJUUnlockablesOndemandTemplate>
{
    NSString *_imageUrl;
    NSString *_thumbnailUrl;
    NSArray *_backgroundImageUrls;
    NSString *_defaultFontName;
    NSString *_defaultFontUrl;
    NSNumber *_defaultWidth;
    NSNumber *_defaultHeight;
    NSString *_productType;
    NSString *_idValue;
    NSString *_categoryId;
    NSArray *_textBoxSpecArray;
    NSString *_instanceId;
    NSNumber *_baseLensGeofilterId;
    NSString *_smallLensPreviewImageUrl;
    SOJUGeofilterResponse *_baseLensGeofilterResponse;
    NSString *_comicId;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
+ (id)screenDensity;
@property(readonly, copy, nonatomic) NSString *comicId; // @synthesize comicId=_comicId;
@property(readonly, copy, nonatomic) SOJUGeofilterResponse *baseLensGeofilterResponse; // @synthesize baseLensGeofilterResponse=_baseLensGeofilterResponse;
@property(readonly, copy, nonatomic) NSString *smallLensPreviewImageUrl; // @synthesize smallLensPreviewImageUrl=_smallLensPreviewImageUrl;
@property(readonly, copy, nonatomic) NSNumber *baseLensGeofilterId; // @synthesize baseLensGeofilterId=_baseLensGeofilterId;
@property(readonly, copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, copy, nonatomic) NSArray *textBoxSpecArray; // @synthesize textBoxSpecArray=_textBoxSpecArray;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(readonly, copy, nonatomic) NSNumber *defaultHeight; // @synthesize defaultHeight=_defaultHeight;
@property(readonly, copy, nonatomic) NSNumber *defaultWidth; // @synthesize defaultWidth=_defaultWidth;
@property(readonly, copy, nonatomic) NSString *defaultFontUrl; // @synthesize defaultFontUrl=_defaultFontUrl;
@property(readonly, copy, nonatomic) NSString *defaultFontName; // @synthesize defaultFontName=_defaultFontName;
@property(readonly, copy, nonatomic) NSArray *backgroundImageUrls; // @synthesize backgroundImageUrls=_backgroundImageUrls;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
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
- (id)initWithImageUrl:(id)arg1 thumbnailUrl:(id)arg2 backgroundImageUrls:(id)arg3 defaultFontName:(id)arg4 defaultFontUrl:(id)arg5 defaultWidth:(id)arg6 defaultHeight:(id)arg7 productType:(id)arg8 idValue:(id)arg9 categoryId:(id)arg10 textBoxSpecArray:(id)arg11 instanceId:(id)arg12 baseLensGeofilterId:(id)arg13 smallLensPreviewImageUrl:(id)arg14 baseLensGeofilterResponse:(id)arg15 comicId:(id)arg16;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)baseLensGeofilterIdValue;
- (long long)productTypeEnum;
- (int)defaultHeightValue;
- (int)defaultWidthValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end


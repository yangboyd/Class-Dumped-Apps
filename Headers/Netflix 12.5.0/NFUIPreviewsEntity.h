//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoEntity.h"

@class NSArray, NSNumber, NSString;

@interface NFUIPreviewsEntity : LolomoEntity
{
    _Bool _isWatched;
    NSArray *_supplementalIds;
    NSNumber *_isOriginal;
    NSString *_panelArt;
    NSString *_titleTreatment;
    NSString *_originalBrandingUrl;
    NSArray *_tags;
    NSString *_foregroundColorString;
    NSString *_backgroundColorString;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(copy, nonatomic) NSString *backgroundColorString; // @synthesize backgroundColorString=_backgroundColorString;
@property(copy, nonatomic) NSString *foregroundColorString; // @synthesize foregroundColorString=_foregroundColorString;
@property(nonatomic) _Bool isWatched; // @synthesize isWatched=_isWatched;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *originalBrandingUrl; // @synthesize originalBrandingUrl=_originalBrandingUrl;
@property(copy, nonatomic) NSString *titleTreatment; // @synthesize titleTreatment=_titleTreatment;
@property(copy, nonatomic) NSString *panelArt; // @synthesize panelArt=_panelArt;
@property(readonly, copy, nonatomic) NSNumber *isOriginal; // @synthesize isOriginal=_isOriginal;
@property(copy, nonatomic) NSArray *supplementalIds; // @synthesize supplementalIds=_supplementalIds;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)foregroundColor;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSString;

@interface NFUIFamiliaritySmallViewEntity : COEntity
{
    NSString *_storyArt;
    NSString *_titleTreatmentUrl;
    NSString *_tcardUrl;
    NSString *_title;
    NSString *_foregroundColorString;
    NSString *_backgroundColorString;
    NSString *_verticalDisplayArt;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(copy, nonatomic) NSString *verticalDisplayArt; // @synthesize verticalDisplayArt=_verticalDisplayArt;
@property(copy, nonatomic) NSString *backgroundColorString; // @synthesize backgroundColorString=_backgroundColorString;
@property(copy, nonatomic) NSString *foregroundColorString; // @synthesize foregroundColorString=_foregroundColorString;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *tcardUrl; // @synthesize tcardUrl=_tcardUrl;
@property(copy, nonatomic) NSString *titleTreatmentUrl; // @synthesize titleTreatmentUrl=_titleTreatmentUrl;
@property(copy, nonatomic) NSString *storyArt; // @synthesize storyArt=_storyArt;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)foregroundColor;

@end


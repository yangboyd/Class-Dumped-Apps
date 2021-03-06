//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWESearchTrendBoardEditionModel, AWEShareModel, AWEURLModel, NSArray, NSString;

@interface AWESearchStarTrendResponseModel : AWEBaseApiModel
{
    NSString *_updateTime;
    NSArray *_starList;
    AWEShareModel *_shareInfo;
    AWEURLModel *_bannerURL;
    AWESearchTrendBoardEditionModel *_editionModel;
}

+ (id)editionModelJSONTransformer;
+ (id)bannerURLJSONTransformer;
+ (id)starListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) AWESearchTrendBoardEditionModel *editionModel; // @synthesize editionModel=_editionModel;
@property(retain, nonatomic) AWEURLModel *bannerURL; // @synthesize bannerURL=_bannerURL;
@property(retain, nonatomic) AWEShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSArray *starList; // @synthesize starList=_starList;
@property(copy, nonatomic) NSString *updateTime; // @synthesize updateTime=_updateTime;

@end


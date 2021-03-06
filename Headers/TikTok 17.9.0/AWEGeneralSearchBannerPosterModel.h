//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEGeneralSearchBannerPosterModel : AWEBaseApiModel
{
    NSString *_title;
    NSString *_subTitle;
    AWEURLModel *_urlModel;
    NSString *_schema;
    NSString *_itemID;
    NSString *_cID;
    NSString *_agID;
    NSString *_aID;
    NSString *_eID;
    NSString *_sourceType;
    long long _schemaType;
}

+ (id)urlModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) long long schemaType; // @synthesize schemaType=_schemaType;
@property(copy, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *eID; // @synthesize eID=_eID;
@property(retain, nonatomic) NSString *aID; // @synthesize aID=_aID;
@property(retain, nonatomic) NSString *agID; // @synthesize agID=_agID;
@property(retain, nonatomic) NSString *cID; // @synthesize cID=_cID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) AWEURLModel *urlModel; // @synthesize urlModel=_urlModel;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end


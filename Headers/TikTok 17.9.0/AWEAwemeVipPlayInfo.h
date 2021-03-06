//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWENoxusVideoTextStruct, NSArray;

@interface AWEAwemeVipPlayInfo : AWEBaseApiModel
{
    unsigned long long _vipPlayMode;
    NSArray *_products;
    unsigned long long _purchaseStatus;
    double _endTime;
    AWENoxusVideoTextStruct *_videoTextStruct;
}

+ (id)videoTextStructJSONTransformer;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) AWENoxusVideoTextStruct *videoTextStruct; // @synthesize videoTextStruct=_videoTextStruct;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long purchaseStatus; // @synthesize purchaseStatus=_purchaseStatus;
@property(copy, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) unsigned long long vipPlayMode; // @synthesize vipPlayMode=_vipPlayMode;

@end


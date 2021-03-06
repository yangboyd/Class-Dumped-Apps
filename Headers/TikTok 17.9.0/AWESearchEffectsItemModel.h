//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSNumber, NSString;

@interface AWESearchEffectsItemModel : AWEBaseApiModel
{
    NSString *_name;
    NSString *_descriptionString;
    NSNumber *_useCount;
    AWEURLModel *_iconURL;
    NSString *_effectID;
}

+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *effectID; // @synthesize effectID=_effectID;
@property(retain, nonatomic) AWEURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSNumber *useCount; // @synthesize useCount=_useCount;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end


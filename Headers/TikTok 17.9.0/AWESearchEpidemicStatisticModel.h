//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWESearchEpidemicStatisticModel : AWEBaseApiModel
{
    NSString *_name;
    NSString *_schemaURL;
    NSArray *_itemModels;
}

+ (id)itemModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *itemModels; // @synthesize itemModels=_itemModels;
@property(retain, nonatomic) NSString *schemaURL; // @synthesize schemaURL=_schemaURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end


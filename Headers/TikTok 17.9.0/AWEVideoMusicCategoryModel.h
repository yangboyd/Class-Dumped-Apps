//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEVideoMusicCategoryModel : AWEBaseApiModel
{
    _Bool _isHot;
    NSString *_idStr;
    NSString *_name;
    AWEURLModel *_cover;
    AWEURLModel *_awemeCover;
    long long _level;
}

+ (id)awemeCoverJSONTransformer;
+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) _Bool isHot; // @synthesize isHot=_isHot;
@property(retain, nonatomic) AWEURLModel *awemeCover; // @synthesize awemeCover=_awemeCover;
@property(retain, nonatomic) AWEURLModel *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *idStr; // @synthesize idStr=_idStr;

@end


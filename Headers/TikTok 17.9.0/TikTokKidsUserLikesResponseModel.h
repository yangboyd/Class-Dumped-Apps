//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface TikTokKidsUserLikesResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    NSNumber *_minCursor;
    NSNumber *_maxCursor;
    NSArray *_awemes;
}

+ (id)awemesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *awemes; // @synthesize awemes=_awemes;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *maxCursor; // @synthesize maxCursor=_maxCursor;
@property(retain, nonatomic) NSNumber *minCursor; // @synthesize minCursor=_minCursor;

@end


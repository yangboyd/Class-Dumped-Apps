//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray;

@interface AWEIronManListResponseModel : AWEBaseApiModel
{
    _Bool _hasMore;
    long long _page;
    NSArray *_list;
}

+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *list; // @synthesize list=_list;
@property(readonly, nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(readonly, nonatomic) long long page; // @synthesize page=_page;

@end


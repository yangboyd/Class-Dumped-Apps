//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber, NSString;

@interface AWEMusicPickResponse : AWEBaseApiModel
{
    _Bool _hasMore;
    NSString *_message;
    NSArray *_banners;
    NSArray *_categories;
    NSArray *_musicList;
    NSArray *_extraMusicList;
    long long _musicListType;
    NSNumber *_FMCursor;
}

+ (id)extraMusicListJSONTransformer;
+ (id)musicListJSONTransformer;
+ (id)categoriesJSONTransformer;
+ (id)bannersJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *FMCursor; // @synthesize FMCursor=_FMCursor;
@property(nonatomic) long long musicListType; // @synthesize musicListType=_musicListType;
@property(retain, nonatomic) NSArray *extraMusicList; // @synthesize extraMusicList=_extraMusicList;
@property(retain, nonatomic) NSArray *musicList; // @synthesize musicList=_musicList;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(copy, nonatomic) NSArray *banners; // @synthesize banners=_banners;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;

@end


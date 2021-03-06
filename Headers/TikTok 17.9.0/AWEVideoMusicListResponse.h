//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEVideoMusicCategoryModel, NSArray, NSNumber;

@interface AWEVideoMusicListResponse : AWEBaseApiModel
{
    NSArray *_mcList;
    NSNumber *_cursor;
    NSNumber *_hasMore;
    NSNumber *_musicType;
    AWEVideoMusicCategoryModel *_titleModel;
    NSArray *_mc_list;
    NSArray *_music_list;
}

+ (id)titleModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *music_list; // @synthesize music_list=_music_list;
@property(retain, nonatomic) NSArray *mc_list; // @synthesize mc_list=_mc_list;
@property(retain, nonatomic) AWEVideoMusicCategoryModel *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) NSNumber *musicType; // @synthesize musicType=_musicType;
@property(retain, nonatomic) NSNumber *hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSArray *mcList; // @synthesize mcList=_mcList;

@end


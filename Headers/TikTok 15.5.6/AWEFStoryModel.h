//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSString;

@interface AWEFStoryModel : AWEBaseApiModel
{
    NSString *_firstVideoId;
    long long _videoCount;
    NSArray *_storyList;
}

+ (id)firstVideoIdJSONTransformer;
+ (id)storyListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *storyList; // @synthesize storyList=_storyList;
@property(nonatomic) long long videoCount; // @synthesize videoCount=_videoCount;
@property(retain, nonatomic) NSString *firstVideoId; // @synthesize firstVideoId=_firstVideoId;
- (void).cxx_destruct;

@end


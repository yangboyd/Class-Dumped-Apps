//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, SCDiscoverFeedSectionLayout, SCDiscoverFeedSectionRerankingInfo;

@interface SCDiscoverFeedSection : SCDocObject <NSCopying>
{
    _Bool _hasMoreStories;
    int _feedType;
    NSArray *_storyIdentifiers;
    NSString *_displayText;
    NSString *_loggingKey;
    NSData *_streamToken;
    long long _fetchedDate;
    SCDiscoverFeedSectionLayout *_layoutConfiguration;
    SCDiscoverFeedSectionRerankingInfo *_rerankingInfo;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) SCDiscoverFeedSectionRerankingInfo *rerankingInfo; // @synthesize rerankingInfo=_rerankingInfo;
@property(readonly, copy, nonatomic) SCDiscoverFeedSectionLayout *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(readonly, nonatomic) _Bool hasMoreStories; // @synthesize hasMoreStories=_hasMoreStories;
@property(readonly, nonatomic) long long fetchedDate; // @synthesize fetchedDate=_fetchedDate;
@property(readonly, copy, nonatomic) NSData *streamToken; // @synthesize streamToken=_streamToken;
@property(readonly, copy, nonatomic) NSString *loggingKey; // @synthesize loggingKey=_loggingKey;
@property(readonly, copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
@property(readonly, copy, nonatomic) NSArray *storyIdentifiers; // @synthesize storyIdentifiers=_storyIdentifiers;
@property(readonly, nonatomic) int feedType; // @synthesize feedType=_feedType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedType:(int)arg1 storyIdentifiers:(id)arg2 displayText:(id)arg3 loggingKey:(id)arg4 streamToken:(id)arg5 fetchedDate:(long long)arg6 hasMoreStories:(_Bool)arg7 layoutConfiguration:(id)arg8 rerankingInfo:(id)arg9;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchQuery, SCSearchStoryCardColorTheme;

@interface SCSearchStoryCardSectionDataModel : NSObject <NSCopying>
{
    SCSearchQuery *_query;
    NSString *_resultContentIdentifier;
    NSArray *_dynamicStories;
    long long _cellStyle;
    SCSearchStoryCardColorTheme *_cellColorTheme;
}

@property(readonly, copy, nonatomic) SCSearchStoryCardColorTheme *cellColorTheme; // @synthesize cellColorTheme=_cellColorTheme;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, copy, nonatomic) NSArray *dynamicStories; // @synthesize dynamicStories=_dynamicStories;
@property(readonly, copy, nonatomic) NSString *resultContentIdentifier; // @synthesize resultContentIdentifier=_resultContentIdentifier;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithQuery:(id)arg1 resultContentIdentifier:(id)arg2 dynamicStories:(id)arg3 cellStyle:(long long)arg4 cellColorTheme:(id)arg5;

@end


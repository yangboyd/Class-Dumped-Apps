//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, UIColor;

@interface SCDiscoverFeedFloatingBadgeViewModel : NSObject <NSCopying>
{
    _Bool _hasStoryRing;
    _Bool _showTitleIcon;
    NSString *_storyThumbnailURL;
    NSString *_titlePrefixString;
    NSString *_titleSuffixString;
    long long _titleBackgroundType;
    NSString *_titleHighlightString;
    UIColor *_colorTheme;
    NSString *_subtitleString;
    long long _numberOfUpdates;
    NSData *_badgeMetadata;
    NSArray *_feedTypes;
    NSString *_pageIdentifier;
    NSString *_sectionIdentifier;
    NSString *_itemIdentifier;
    NSString *_sectionTitle;
}

@property(readonly, copy, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(readonly, copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(readonly, copy, nonatomic) NSArray *feedTypes; // @synthesize feedTypes=_feedTypes;
@property(readonly, copy, nonatomic) NSData *badgeMetadata; // @synthesize badgeMetadata=_badgeMetadata;
@property(readonly, nonatomic) long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
@property(readonly, copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property(readonly, copy, nonatomic) UIColor *colorTheme; // @synthesize colorTheme=_colorTheme;
@property(readonly, copy, nonatomic) NSString *titleHighlightString; // @synthesize titleHighlightString=_titleHighlightString;
@property(readonly, nonatomic) _Bool showTitleIcon; // @synthesize showTitleIcon=_showTitleIcon;
@property(readonly, nonatomic) long long titleBackgroundType; // @synthesize titleBackgroundType=_titleBackgroundType;
@property(readonly, copy, nonatomic) NSString *titleSuffixString; // @synthesize titleSuffixString=_titleSuffixString;
@property(readonly, copy, nonatomic) NSString *titlePrefixString; // @synthesize titlePrefixString=_titlePrefixString;
@property(readonly, nonatomic) _Bool hasStoryRing; // @synthesize hasStoryRing=_hasStoryRing;
@property(readonly, copy, nonatomic) NSString *storyThumbnailURL; // @synthesize storyThumbnailURL=_storyThumbnailURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStoryThumbnailURL:(id)arg1 hasStoryRing:(_Bool)arg2 titlePrefixString:(id)arg3 titleSuffixString:(id)arg4 titleBackgroundType:(long long)arg5 showTitleIcon:(_Bool)arg6 titleHighlightString:(id)arg7 colorTheme:(id)arg8 subtitleString:(id)arg9 numberOfUpdates:(long long)arg10 badgeMetadata:(id)arg11 feedTypes:(id)arg12 pageIdentifier:(id)arg13 sectionIdentifier:(id)arg14 itemIdentifier:(id)arg15 sectionTitle:(id)arg16;

@end


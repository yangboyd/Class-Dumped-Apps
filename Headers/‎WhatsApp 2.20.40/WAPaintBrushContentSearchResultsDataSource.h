//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPaintBrushContentDataSource.h>

@class NSString;

@interface WAPaintBrushContentSearchResultsDataSource : WAPaintBrushContentDataSource
{
    long long _count;
    long long _selectionCount;
    NSString *_languageCode;
}

- (void).cxx_destruct;
- (void)didFinishDisplaying;
- (void)didSelectContent:(id)arg1 atIndexPath:(id)arg2;
- (id)initWithEmojis:(id)arg1 query:(id)arg2 languageCode:(id)arg3 listEmojisBeforeStickers:(_Bool)arg4;

@end


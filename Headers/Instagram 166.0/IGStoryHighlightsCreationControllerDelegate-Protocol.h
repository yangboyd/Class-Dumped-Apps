//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGHighlightCoverModel, IGStoryHighlightsCreationController, IGStoryReel, NSSet, NSString;

@protocol IGStoryHighlightsCreationControllerDelegate <NSObject>
- (void)highlightsCreationController:(IGStoryHighlightsCreationController *)arg1 didPublishSuggestHighlightType:(long long)arg2;
- (void)highlightsCreationControllerDidEditSuggestedHighlight:(IGStoryHighlightsCreationController *)arg1 addedItems:(NSSet *)arg2 removedItems:(NSSet *)arg3 title:(NSString *)arg4 coverModel:(IGHighlightCoverModel *)arg5;
- (void)highlightsCreationControllerDidTapCancel:(IGStoryHighlightsCreationController *)arg1;
- (void)highlightsCreationControllerDidFinish:(IGStoryHighlightsCreationController *)arg1 mode:(long long)arg2 reel:(IGStoryReel *)arg3;
@end


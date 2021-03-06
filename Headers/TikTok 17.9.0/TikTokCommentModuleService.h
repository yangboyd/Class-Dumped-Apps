//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "TikTokCommentModuleService-Protocol.h"

@class NSString;

@interface TikTokCommentModuleService : HTSService <TikTokCommentModuleService>
{
}

- (id)defaultCommentAvatarImage;
- (_Bool)isPureEmoji:(id)arg1;
- (void)commentAwemeItemWithID:(id)arg1 content:(id)arg2 replyCommentID:(id)arg3 replySubCommentID:(id)arg4 extraInfo:(id)arg5 referString:(id)arg6 isFamiliar:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;
- (Class)repostTrackManager;
- (id)inputViewWithFrame:(struct CGRect)arg1 inputViewType:(unsigned long long)arg2;
- (id)commentListViewControllerWithAwemeModel:(id)arg1 componentsPriorityType:(id)arg2;
- (id)commentInputViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


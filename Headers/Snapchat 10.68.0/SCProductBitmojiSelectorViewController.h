//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCBitmojiAvatarBuilderRouterDelegate-Protocol.h"
#import "SCChatStickerManagerListener-Protocol.h"
#import "SCStickerPickerMenuDelegate-Protocol.h"

@class NSArray, NSString, SCBitmojiStickerDataProvider, SCLoadingIndicatorView, SCStickerPickerMenuView, SCUserSession;
@protocol SCProductBitmojiSelectorDelegate;

@interface SCProductBitmojiSelectorViewController : UIViewController <SCStickerPickerMenuDelegate, SCChatStickerManagerListener, SCBitmojiAvatarBuilderRouterDelegate>
{
    SCBitmojiStickerDataProvider *_dataProvider;
    SCLoadingIndicatorView *_loadingIndicatorView;
    SCStickerPickerMenuView *_stickerPickerMenuView;
    NSArray *_avatarIds;
    SCUserSession *_userSession;
    id <SCProductBitmojiSelectorDelegate> _delegate;
}

@property(nonatomic) __weak id <SCProductBitmojiSelectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)bitmojiAvatarBuilderPresentingViewController;
- (void)closeStickerPickerMenuShouldOpenSnapCut:(_Bool)arg1;
- (void)friendmojiAvatarPickerClosedWithFriendmojiType:(long long)arg1 selectedStickerId:(id)arg2;
- (_Bool)friendmojiHintRequestedWithTargetView:(id)arg1 delegate:(id)arg2;
- (_Bool)avatarPickerRequestedWithBitmojiUsers:(id)arg1 targetView:(id)arg2 delegate:(id)arg3;
- (void)stickerSelected:(id)arg1 center:(struct CGPoint)arg2 thumbnail:(id)arg3 stickerIndex:(unsigned long long)arg4 categoryIndex:(unsigned long long)arg5 isFromRecents:(_Bool)arg6 searchTag:(id)arg7;
- (void)closedStickerPickerMenuAtCategory:(id)arg1 sticker:(id)arg2 enterSearchCount:(long long)arg3 pretypeStickerTagSelectCount:(long long)arg4 prefixMatchStickerTagSelectCount:(long long)arg5;
- (void)openedStickerPickerMenu;
- (void)stickerPackagesDidChangeWithCategoryType:(long long)arg1;
- (void)updateWithAvatars:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)setupLoadingIndicatorView;
- (void)setupStickerPickerMenuView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAvatars:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


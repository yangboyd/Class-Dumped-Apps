//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCBitmojiLinkingViewDelegate-Protocol.h"
#import "SCBitmojiUnlinkingViewDelegate-Protocol.h"

@class NSString, SCBitmojiLinkingSucceededView, SCBitmojiUnlinkingView;
@protocol SCBitmojiSettingViewDelegate, SCDownloadableContentManaging;

@interface SCBitmojiSettingsView : UIView <SCBitmojiLinkingViewDelegate, SCBitmojiUnlinkingViewDelegate>
{
    unsigned long long _state;
    id <SCBitmojiSettingViewDelegate> _delegate;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    UIView *_linkingView;
    SCBitmojiUnlinkingView *_unlinkingView;
    SCBitmojiLinkingSucceededView *_linkingSucceededView;
    UIView *_emptyLoadingView;
}

+ (id)bitmojiSettingsViewWithdelegate:(id)arg1 downloadableContentManager:(id)arg2;
@property(retain, nonatomic) UIView *emptyLoadingView; // @synthesize emptyLoadingView=_emptyLoadingView;
@property(retain, nonatomic) SCBitmojiLinkingSucceededView *linkingSucceededView; // @synthesize linkingSucceededView=_linkingSucceededView;
@property(retain, nonatomic) SCBitmojiUnlinkingView *unlinkingView; // @synthesize unlinkingView=_unlinkingView;
@property(retain, nonatomic) UIView *linkingView; // @synthesize linkingView=_linkingView;
- (void).cxx_destruct;
- (void)didPressChangeDratiniCell:(id)arg1 view:(id)arg2;
- (void)didPressEditBitmojiCell:(id)arg1 view:(id)arg2;
- (void)didPressChangeOutfitCell:(id)arg1 view:(id)arg2;
- (void)didPressUnlinkButton:(id)arg1 view:(id)arg2;
- (void)didPressLinkButton:(id)arg1 view:(id)arg2;
- (void)updateBitmojiSettingsViewWithState:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMUserMessageTableViewCell.h"

@class AWEIMMessageAttachmentDownloadViewModel, AWEIMMessageAttachmentUploadViewModel, AWEIMUploadProgressView, FBKVOController, NSString, UIImageView, UIView;

@interface AWEIMVideoMessageTableViewCell : AWEIMUserMessageTableViewCell
{
    AWEIMUploadProgressView *_sendProgressView;
    UIView *_displayMaskView;
    UIView *_videoContainerView;
    UIImageView *_playIconImageView;
    UIImageView *_videoPosterImageView;
    AWEIMMessageAttachmentDownloadViewModel *_downloadVM;
    AWEIMMessageAttachmentUploadViewModel *_uploadVM;
    FBKVOController *_vmKVO;
    NSString *_posterFileID;
    NSString *_videoFileID;
    NSString *_posterFilePath;
    NSString *_videoFilePath;
    NSString *_videoCoverFilePath;
    NSString *_videoAssetIdentifier;
}

+ (id)p_defaultImageWithSize:(struct CGSize)arg1;
+ (id)identifier;
+ (struct CGSize)contentSizeWithMesasge:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *videoAssetIdentifier; // @synthesize videoAssetIdentifier=_videoAssetIdentifier;
@property(retain, nonatomic) NSString *videoCoverFilePath; // @synthesize videoCoverFilePath=_videoCoverFilePath;
@property(retain, nonatomic) NSString *videoFilePath; // @synthesize videoFilePath=_videoFilePath;
@property(retain, nonatomic) NSString *posterFilePath; // @synthesize posterFilePath=_posterFilePath;
@property(retain, nonatomic) NSString *videoFileID; // @synthesize videoFileID=_videoFileID;
@property(retain, nonatomic) NSString *posterFileID; // @synthesize posterFileID=_posterFileID;
@property(retain, nonatomic) FBKVOController *vmKVO; // @synthesize vmKVO=_vmKVO;
@property(retain, nonatomic) AWEIMMessageAttachmentUploadViewModel *uploadVM; // @synthesize uploadVM=_uploadVM;
@property(retain, nonatomic) AWEIMMessageAttachmentDownloadViewModel *downloadVM; // @synthesize downloadVM=_downloadVM;
@property(retain, nonatomic) UIImageView *videoPosterImageView; // @synthesize videoPosterImageView=_videoPosterImageView;
@property(retain, nonatomic) UIImageView *playIconImageView; // @synthesize playIconImageView=_playIconImageView;
@property(retain, nonatomic) UIView *videoContainerView; // @synthesize videoContainerView=_videoContainerView;
@property(retain, nonatomic) UIView *displayMaskView; // @synthesize displayMaskView=_displayMaskView;
@property(retain, nonatomic) AWEIMUploadProgressView *sendProgressView; // @synthesize sendProgressView=_sendProgressView;
- (void)p_clipAndShowImage:(id)arg1;
- (void)p_refreshImageUI;
- (void)p_dismissUploadingMaskView:(_Bool)arg1;
- (void)p_showUploadingMaskView:(_Bool)arg1;
- (_Bool)configUploadingState;
- (void)p_observeUploadVMWithNextFileID:(id)arg1;
- (_Bool)configDownloadingStateLocalImage:(id)arg1;
- (id)configLocalImage:(id)arg1;
- (void)layoutSubviews;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)menuViewRectContainsPoint:(struct CGPoint)arg1;
- (struct CGRect)menuTargetRect;
- (id)menuInView;
- (id)menuItems;
- (void)handleVideoStartResendNty:(id)arg1;
- (void)stateViewTapped:(id)arg1;
- (void)videoPosterTapped:(id)arg1;
- (void)addForwardMsgResource;
- (void)refreshStateUIWithState:(long long)arg1;
- (void)notifyMessageStateChanged:(long long)arg1;
- (void)setupUI;
- (void)configWithMessage:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


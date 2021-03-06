//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStoryBaseEditAndPublishViewController.h"

#import "AWEEditorStickerGestureViewControllerDelegate-Protocol.h"

@class AWEPublishIMPhotoTask, AWEPublishIMVideoTask, AWEPublishStoryPhotoTask, AWEPublishStoryVideoTask, AWESendToFriendViewController, AWEStoryPaintView, NSString;

@interface AWEStoryEditAndPublishViewController : AWEStoryBaseEditAndPublishViewController <AWEEditorStickerGestureViewControllerDelegate>
{
    _Bool _saveLocal;
    _Bool _isFirstEnter;
    CDUnknownBlockType _backBlock;
    NSString *_storyRecordModeStr;
    AWEPublishStoryVideoTask *_videotaskV2;
    AWEPublishStoryPhotoTask *_phototaskV2;
    AWEPublishIMVideoTask *_imVideoTask;
    AWEPublishIMPhotoTask *_imPhotoTask;
    AWEStoryPaintView *_paintView;
    AWESendToFriendViewController *_friendViewController;
}

@property(nonatomic) _Bool isFirstEnter; // @synthesize isFirstEnter=_isFirstEnter;
@property(nonatomic) _Bool saveLocal; // @synthesize saveLocal=_saveLocal;
@property(retain, nonatomic) AWESendToFriendViewController *friendViewController; // @synthesize friendViewController=_friendViewController;
@property(retain, nonatomic) AWEStoryPaintView *paintView; // @synthesize paintView=_paintView;
@property(retain, nonatomic) AWEPublishIMPhotoTask *imPhotoTask; // @synthesize imPhotoTask=_imPhotoTask;
@property(retain, nonatomic) AWEPublishIMVideoTask *imVideoTask; // @synthesize imVideoTask=_imVideoTask;
@property(retain, nonatomic) AWEPublishStoryPhotoTask *phototaskV2; // @synthesize phototaskV2=_phototaskV2;
@property(retain, nonatomic) AWEPublishStoryVideoTask *videotaskV2; // @synthesize videotaskV2=_videotaskV2;
@property(retain, nonatomic) NSString *storyRecordModeStr; // @synthesize storyRecordModeStr=_storyRecordModeStr;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
- (void).cxx_destruct;
- (void)startTransitionAnimation;
- (void)executeTaskV2;
- (void)enqueuePublishTask;
- (void)publish;
- (void)preparePublish;
- (void)backClicked;
- (id)aweplayer;
- (double)rightTopItemSpacing;
- (struct UIEdgeInsets)rightTopContainerInset;
- (double)rightTopOffset;
- (void)editAndPublishViewNextButtonClicked;
- (id)editAndPublishViewLeftBottomData;
- (id)editAndPublishViewRightTopData;
- (id)publishIconUrl;
- (unsigned long long)publishType;
- (_Bool)editAndPublishViewShowPublish;
- (_Bool)enableTapGesture;
- (void)refreshSendToFriendButtonWithFriends:(id)arg1;
- (void)setBrushSizeWithStyle:(unsigned long long)arg1;
- (id)createTextFunctionHintView;
- (void)muteClicked;
- (void)localSaveClicked;
- (void)paintCliced;
- (void)sendToFriendClicked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 externalTextInfo:(id)arg2;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


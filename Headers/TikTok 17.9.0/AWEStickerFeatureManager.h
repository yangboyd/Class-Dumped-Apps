//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEModernStickerPickerDelegate-Protocol.h"

@class AWEModernStickerViewController, AWEStickerDataManager, IESEffectModel, NSDictionary, NSString, NSTimer, UIImage;
@protocol AWEComposerEffectProtocol, AWEStickerFeatureDelegate;

@interface AWEStickerFeatureManager : NSObject <AWEModernStickerPickerDelegate>
{
    _Bool _isPhotoMode;
    _Bool _isStoryMode;
    _Bool _needTrackEvent;
    NSObject<AWEStickerFeatureDelegate> *_delegate;
    AWEStickerDataManager *_stickerDataManager;
    NSDictionary *_trackingInfoDictionary;
    CDUnknownBlockType _applyStickerCompletionBlock;
    CDUnknownBlockType _willapplyStickerBlock;
    CDUnknownBlockType _stickerStatusBlock;
    AWEModernStickerViewController *_stickerController;
    UIImage *_prevImage;
    IESEffectModel *_effectApplied;
    id <AWEComposerEffectProtocol> _composerEffectApplied;
    double _effectAppliedStart;
    NSTimer *_photoSensitiveTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *photoSensitiveTimer; // @synthesize photoSensitiveTimer=_photoSensitiveTimer;
@property(nonatomic) double effectAppliedStart; // @synthesize effectAppliedStart=_effectAppliedStart;
@property(retain, nonatomic) id <AWEComposerEffectProtocol> composerEffectApplied; // @synthesize composerEffectApplied=_composerEffectApplied;
@property(retain, nonatomic) IESEffectModel *effectApplied; // @synthesize effectApplied=_effectApplied;
@property(retain, nonatomic) UIImage *prevImage; // @synthesize prevImage=_prevImage;
@property(retain, nonatomic) AWEModernStickerViewController *stickerController; // @synthesize stickerController=_stickerController;
@property(copy, nonatomic) CDUnknownBlockType stickerStatusBlock; // @synthesize stickerStatusBlock=_stickerStatusBlock;
@property(copy, nonatomic) CDUnknownBlockType willapplyStickerBlock; // @synthesize willapplyStickerBlock=_willapplyStickerBlock;
@property(copy, nonatomic) CDUnknownBlockType applyStickerCompletionBlock; // @synthesize applyStickerCompletionBlock=_applyStickerCompletionBlock;
@property(nonatomic) _Bool needTrackEvent; // @synthesize needTrackEvent=_needTrackEvent;
@property(copy, nonatomic) NSDictionary *trackingInfoDictionary; // @synthesize trackingInfoDictionary=_trackingInfoDictionary;
@property(retain, nonatomic) AWEStickerDataManager *stickerDataManager; // @synthesize stickerDataManager=_stickerDataManager;
@property(nonatomic) _Bool isStoryMode; // @synthesize isStoryMode=_isStoryMode;
@property(nonatomic) _Bool isPhotoMode; // @synthesize isPhotoMode=_isPhotoMode;
@property(nonatomic) __weak NSObject<AWEStickerFeatureDelegate> *delegate; // @synthesize delegate=_delegate;
- (void)p_recordAppliedComposerEffect:(id)arg1;
- (void)p_recordAppliedEffect:(id)arg1;
- (void)trackEffectApplyToRecognize:(id)arg1;
- (id)cameraService;
- (void)switchCameraToFront:(_Bool)arg1;
- (void)updateModernStickerViewController;
- (void)setSelectedSticker:(id)arg1 selectedChildSticker:(id)arg2;
- (void)setIsShowingStickerController:(_Bool)arg1;
- (void)clearStickerAllEffect;
- (void)didChooseImage:(id)arg1;
- (void)configCameraStickerStatusBlockWithSticker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applyVESticker:(id)arg1;
- (void)p_applyMarathonSticker:(id)arg1;
- (void)p_applySticker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePhotoSensitiveTimer;
- (void)p_applyPhotoSensitiveSticker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applySticker:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)getStickerViewControllerDismissBlock;
- (void)setStickerViewControllerDismissBlock:(CDUnknownBlockType)arg1;
- (void)hideStickerViewController:(_Bool)arg1;
- (void)showStickerViewControllerWithBlock:(CDUnknownBlockType)arg1;
- (void)setStickerFeatureDelegate:(id)arg1;
- (id)initWithPanelType:(unsigned long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


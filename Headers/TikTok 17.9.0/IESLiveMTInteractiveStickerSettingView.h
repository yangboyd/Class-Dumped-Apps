//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveEffectStickerSelectProtocol-Protocol.h"

@class NSString;
@protocol IESLiveEffectStickerViewFactory, IESLiveSettings;

@interface IESLiveMTInteractiveStickerSettingView : UIView <IESLiveEffectStickerSelectProtocol>
{
    NSString *_stickerPath;
    UIView *_cakeMaskPickerView;
    id <IESLiveSettings> _settings;
    id <IESLiveEffectStickerViewFactory> _effectViewFactory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveEffectStickerViewFactory> effectViewFactory; // @synthesize effectViewFactory=_effectViewFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) UIView *cakeMaskPickerView; // @synthesize cakeMaskPickerView=_cakeMaskPickerView;
@property(copy, nonatomic) NSString *stickerPath; // @synthesize stickerPath=_stickerPath;
- (void)didSelectSticker:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


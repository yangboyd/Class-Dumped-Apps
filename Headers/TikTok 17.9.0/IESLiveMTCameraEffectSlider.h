//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLiveMTSliderProtocol-Protocol.h"

@class IESLiveMTCustomSlider, NSString, UILabel;
@protocol IESLiveBeautyProvider, IESLiveLanguageService;

@interface IESLiveMTCameraEffectSlider : UIView <IESLiveMTSliderProtocol>
{
    _Bool _showIndicator;
    _Bool _needStep;
    CDUnknownBlockType _valueChangedBlock;
    CDUnknownBlockType _changeEndBlock;
    NSString *_title;
    IESLiveMTCustomSlider *_slider;
    UILabel *_titleLabel;
    UILabel *_indicatorLabel;
    long long _currentValue;
    id <IESLiveLanguageService> _languageService;
    id <IESLiveBeautyProvider> _beautyProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <IESLiveBeautyProvider> beautyProvider; // @synthesize beautyProvider=_beautyProvider;
@property(retain, nonatomic) id <IESLiveLanguageService> languageService; // @synthesize languageService=_languageService;
@property(nonatomic) long long currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) UILabel *indicatorLabel; // @synthesize indicatorLabel=_indicatorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool needStep; // @synthesize needStep=_needStep;
@property(retain, nonatomic) IESLiveMTCustomSlider *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType changeEndBlock; // @synthesize changeEndBlock=_changeEndBlock;
@property(nonatomic) _Bool showIndicator; // @synthesize showIndicator=_showIndicator;
@property(copy, nonatomic) CDUnknownBlockType valueChangedBlock; // @synthesize valueChangedBlock=_valueChangedBlock;
- (void)layoutSubviews;
- (void)updateIndicatorLabelFrame:(long long)arg1;
- (void)updateIndicatorLabelDisplay:(long long)arg1;
- (void)updateIndicatorLabelDisplayAndFrame:(long long)arg1;
- (void)dragExit:(id)arg1;
- (void)slideChanged:(id)arg1;
- (void)setValue:(long long)arg1;
- (void)setTitleLabelWidth:(double)arg1 needAdjustFont:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


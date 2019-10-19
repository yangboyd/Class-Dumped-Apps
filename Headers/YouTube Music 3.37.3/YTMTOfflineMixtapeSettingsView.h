//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MDCSliderDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"

@class MDCSlider, NSString, QTMSwitch, UILabel;

@interface YTMTOfflineMixtapeSettingsView : UIView <MDCSliderDelegate, YTPageStyleProvider>
{
    UILabel *_titleLabel;
    UILabel *_storageLabel;
    UILabel *_lastRefreshedLabel;
    UILabel *_instructionLabel;
    unsigned long long _storableSongCount;
    long long _pageStyle;
    MDCSlider *_slider;
    QTMSwitch *_offlineMixtapeSwitch;
    unsigned long long _availableStorage;
    unsigned long long _memoryPerSong;
}

@property(nonatomic) unsigned long long memoryPerSong; // @synthesize memoryPerSong=_memoryPerSong;
@property(readonly, nonatomic) unsigned long long availableStorage; // @synthesize availableStorage=_availableStorage;
@property(readonly, nonatomic) unsigned long long storableSongCount; // @synthesize storableSongCount=_storableSongCount;
@property(retain, nonatomic) QTMSwitch *offlineMixtapeSwitch; // @synthesize offlineMixtapeSwitch=_offlineMixtapeSwitch;
@property(retain, nonatomic) MDCSlider *slider; // @synthesize slider=_slider;
@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
- (void).cxx_destruct;
- (id)slider:(id)arg1 accessibilityLabelForValue:(double)arg2;
- (void)refreshLabelsAndCheckStorage:(_Bool)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithUserMaximumTrackCount:(unsigned long long)arg1 lastRefreshedString:(id)arg2 memoryPerSong:(unsigned long long)arg3 availableStorage:(unsigned long long)arg4 pageStyle:(long long)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


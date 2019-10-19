//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class NSString, YTFormattedStringLabel, YTITopicPickerRenderer, YTQTMButton;

@interface YTTopicPickerView : UIView <YTPageStyling>
{
    _Bool _selected;
    UIView *_buttonBar;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTITopicPickerRenderer *_renderer;
    long long _pageStyle;
    YTQTMButton *_acceptButton;
    YTQTMButton *_dismissButton;
    UIView *_collectionView;
    id <YTTopicPickerViewProtocol> _topicPickerViewDelegate;
}

@property(nonatomic) __weak id <YTTopicPickerViewProtocol> topicPickerViewDelegate; // @synthesize topicPickerViewDelegate=_topicPickerViewDelegate;
- (void).cxx_destruct;
- (void)didTapDismissButton:(id)arg1;
- (void)didTapAcceptButton:(id)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)enableAcceptButton:(_Bool)arg1;
- (id)buttonsArray;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setCollectionView:(id)arg1;
- (id)initWithRenderer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


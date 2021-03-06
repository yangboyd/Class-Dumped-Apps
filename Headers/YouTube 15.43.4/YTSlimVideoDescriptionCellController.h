//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTInnerTubeCellController.h>

#import "YTFormattedStringLabelDelegate-Protocol.h"
#import "YTHotConfigObserver-Protocol.h"
#import "YTRichMetadataDelegate-Protocol.h"

@class NSString;
@protocol YTHintsConfig, YTNGWatchMetadataPanelStateResponderProvider;

@interface YTSlimVideoDescriptionCellController : YTInnerTubeCellController <YTRichMetadataDelegate, YTHotConfigObserver, YTFormattedStringLabelDelegate>
{
    _Bool _expanded;
    id <YTNGWatchMetadataPanelStateResponderProvider> _ngwMetadataPanelStateProvider;
    id <YTHintsConfig> _hintsConfig;
}

- (void).cxx_destruct;
- (void)hotConfigDidChange:(id)arg1;
- (void)didSelectRichMetadataView:(id)arg1 withCommand:(id)arg2 title:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


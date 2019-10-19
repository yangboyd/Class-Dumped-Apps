//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderProviderProtocol-Protocol.h"

@class NSIndexPath;
@protocol YTCellSelectionObserver, YTResponder;

@protocol YTCellSelectionResponderProvider <YTResponderProviderProtocol>
- (void)setNeedsSelectMatchingBlockUpdate;
- (void)expandLeftPaneIfNeeded;
- (void)addCellSelectionObserver:(id <YTCellSelectionObserver>)arg1;
- (void)didSelectCellAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)selectedCellIndexPath;
- (_Bool)isCellSelectionEnabledForResponder:(id <YTResponder>)arg1;
@end


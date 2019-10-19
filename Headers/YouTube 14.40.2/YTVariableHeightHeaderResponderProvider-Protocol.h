//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponder.h"
#import "YTResponderProviderProtocol.h"

@class UIScrollView, UIView;

@protocol YTVariableHeightHeaderResponderProvider <YTResponderProviderProtocol, YTResponder>
@property(nonatomic) __weak UIView *touchForwardingTarget;
- (void)contentScrollViewDidScroll:(UIScrollView *)arg1;
- (_Bool)shouldDisableScrollingHeader;
- (_Bool)isAttachedToPage;
- (void)refreshHeaderHeight;
- (void)adjustHeaderHeight:(double)arg1;
- (void)minimizeHeaderAnimated:(_Bool)arg1;
- (void)maximizeHeaderAnimated:(_Bool)arg1;
- (double)headerMaximumHeight;
- (double)headerMinimumHeight;
- (double)currentHeaderHeight;
- (_Bool)hasVariableHeightHeader;
@end


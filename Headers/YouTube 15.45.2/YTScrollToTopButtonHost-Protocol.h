//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class YTQTMButton;

@protocol YTScrollToTopButtonHost <NSObject>
@property(nonatomic, getter=isScrollToTopHidden) _Bool scrollToTopHidden;
- (void)updateScrollToTopButtonPositionAsHidden:(_Bool)arg1;
- (void)addScrollToTopButton:(YTQTMButton *)arg1 buttonType:(unsigned long long)arg2;
@end


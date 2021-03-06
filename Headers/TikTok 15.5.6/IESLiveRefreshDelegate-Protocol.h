//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIScrollView, UIView;

@protocol IESLiveRefreshDelegate <NSObject>
- (void)scrollView:(UIScrollView *)arg1 willBeginRefreshWithRefreshType:(unsigned long long)arg2;

@optional
- (void)scrollView:(UIScrollView *)arg1 didEndRefreshWithRefreshType:(unsigned long long)arg2;
- (void)scrollView:(UIScrollView *)arg1 didClickRefreshFooter:(UIView *)arg2 refreshState:(unsigned long long)arg3;
- (double)scrollView:(UIScrollView *)arg1 heightForRefreshViewWithRefreshType:(unsigned long long)arg2 refreshState:(unsigned long long)arg3;
- (NSString *)scrollView:(UIScrollView *)arg1 titleForRefreshWithRefreshType:(unsigned long long)arg2 refreshState:(unsigned long long)arg3;
- (UIView *)scrollView:(UIScrollView *)arg1 viewForRefreshWithRefreshType:(unsigned long long)arg2 refreshState:(unsigned long long)arg3;
@end


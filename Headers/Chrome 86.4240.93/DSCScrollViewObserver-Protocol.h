//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@protocol DSCScrollItem, DSCScrollableView;

@protocol DSCScrollViewObserver <NSObject>
- (void)subviewDidStopScrolling:(id <DSCScrollableView>)arg1 forContentView:(id <DSCScrollableView>)arg2;
- (void)scrollViewDidDisappear:(id <DSCScrollableView>)arg1;
- (void)scrollViewDidAppear:(id <DSCScrollableView>)arg1;
- (void)scrollView:(id <DSCScrollableView>)arg1 didChangeLayoutWithUpdateType:(long long)arg2;
- (void)scrollViewDidScroll:(id <DSCScrollableView>)arg1;
- (void)scrollViewDidStopScrolling:(id <DSCScrollableView>)arg1;
- (void)scrollViewDidStartScrolling:(id <DSCScrollableView>)arg1;

@optional
- (void)scrollView:(id <DSCScrollableView>)arg1 refreshIndicator:(id)arg2 stateDidChange:(long long)arg3;
- (void)scrollView:(id <DSCScrollableView>)arg1 didDisplayScrollItem:(id <DSCScrollItem>)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet, NSString, UIScrollView;
@protocol YTMTabViewDelegate;

@interface YTMTabView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_contentView;
    NSMutableArray *_tabContentViews;
    NSMutableSet *_loadedViews;
    _Bool _headerVisible;
    id <YTMTabViewDelegate> _delegate;
    UIView *_headerView;
    double _headerVerticalOffset;
}

@property(nonatomic) double headerVerticalOffset; // @synthesize headerVerticalOffset=_headerVerticalOffset;
@property(nonatomic, getter=isHeaderVisible) _Bool headerVisible; // @synthesize headerVisible=_headerVisible;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <YTMTabViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadContentViewAtIndex:(unsigned long long)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long selectedIndex;
- (void)removeAllTabContentViews;
- (void)replaceTabContentView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addTabContentView:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


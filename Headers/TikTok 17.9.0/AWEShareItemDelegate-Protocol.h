//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEShareItem;

@protocol AWEShareItemDelegate <NSObject>

@optional
- (void)shareItem:(AWEShareItem *)arg1 didDisappear:(_Bool)arg2;
- (void)shareItem:(AWEShareItem *)arg1 willAppear:(_Bool)arg2;
- (void)didUnhighlightShareItem:(AWEShareItem *)arg1;
- (void)didHighlightShareItem:(AWEShareItem *)arg1;
- (void)didSelectShareItem:(AWEShareItem *)arg1;
@end


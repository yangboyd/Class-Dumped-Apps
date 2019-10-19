//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyleProvider-Protocol.h"

@class NSString, QTMProgressBar, UILabel;

@interface YTMTStorageStatusView : UIView <YTPageStyleProvider>
{
    QTMProgressBar *_storageStatusBar;
    UILabel *_titleLabel;
    UILabel *_availableStorageLabel;
    UILabel *_usedStorageLabel;
    long long _pageStyle;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long pageStyle; // @synthesize pageStyle=_pageStyle;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setUsedStorage:(unsigned long long)arg1 availableStorage:(unsigned long long)arg2;
- (id)initWithPageStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


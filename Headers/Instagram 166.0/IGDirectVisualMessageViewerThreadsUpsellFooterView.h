//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStoryCTAButton;
@protocol IGDirectVisualMessageViewerThreadsUpsellFooterViewDelegate;

@interface IGDirectVisualMessageViewerThreadsUpsellFooterView : UIView
{
    IGStoryCTAButton *_storyCTAButton;
    id <IGDirectVisualMessageViewerThreadsUpsellFooterViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectVisualMessageViewerThreadsUpsellFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapStoryCTAButton;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


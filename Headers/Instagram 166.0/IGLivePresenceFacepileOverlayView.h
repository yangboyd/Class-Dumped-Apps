//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGStackLayout, IGStoryFacepileView, UILabel;

@interface IGLivePresenceFacepileOverlayView : UIView
{
    IGStoryFacepileView *_facepileView;
    UILabel *_label;
    IGStackLayout *_stackLayout;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithViewModel:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol DBContentViewObject;

@interface DBQuestionnaireOnboardingDLBannerView : UIView
{
    // Error parsing type: , name: cachedAccessibilityElements
    // Error parsing type: , name: labelView
    // Error parsing type: , name: imageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: subtitleLabel
    // Error parsing type: , name: dismissButton
    // Error parsing type: , name: ctaButton
    // Error parsing type: , name: tapActionBlock
    // Error parsing type: , name: accessoryActionBlock
    // Error parsing type: , name: impressionBlock
}

- (void).cxx_destruct;
- (void)bannerViewDidAppear;
@property(nonatomic, readonly) id <DBContentViewObject> contentViewObject;
- (void)contentViewObjectDidUpdate;
- (void)unbindFromContentViewObject;
- (void)bindToContentViewObject:(id)arg1;
- (void)didTapAction;
- (void)didTapDismiss;
@property(nonatomic, copy) NSArray *accessibilityElements;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


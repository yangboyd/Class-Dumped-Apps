//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JETButton, JETButtonFooter, UILabel;
@protocol JETFamilyHubSetupWrapperDelegate;

@interface JETFamilyHubSetupWrapperView : UIView
{
    id <JETFamilyHubSetupWrapperDelegate> _delegate;
    JETButton *_nextButton;
    JETButtonFooter *_footer;
    UIView *_innerView;
    UILabel *_headerLabel;
    double _headerPadding;
}

@property(nonatomic) double headerPadding; // @synthesize headerPadding=_headerPadding;
@property(nonatomic) __weak UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(nonatomic) __weak UIView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) JETButtonFooter *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) JETButton *nextButton; // @synthesize nextButton=_nextButton;
@property(nonatomic) __weak id <JETFamilyHubSetupWrapperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addHeaderPadding;
- (void)nextButtonTapped;
- (void)styleFooter;
- (void)styleHeaderLabel;
- (void)setShowsNextButton:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithHeaderText:(id)arg1 accessibilityID:(id)arg2;

@end


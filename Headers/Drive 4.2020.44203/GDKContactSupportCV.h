//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GOOBaseContentView.h>

@class MDCButton, UILabel;
@protocol GDKContactSupportCVDelegate;

@interface GDKContactSupportCV : GOOBaseContentView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    MDCButton *_contactSupport;
    id <GDKContactSupportCVDelegate> _delegate;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) __weak id <GDKContactSupportCVDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MDCButton *contactSupport; // @synthesize contactSupport=_contactSupport;
@property(readonly, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didTapContactSupport;
- (void)prepareForReuse;
- (void)updateViewWithObject:(id)arg1;
- (void)makeConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end


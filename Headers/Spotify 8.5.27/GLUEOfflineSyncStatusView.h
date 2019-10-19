//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEReusable-Protocol.h"
#import "GLUEStyleable-Protocol.h"

@class GLUEOfflineSyncStatusViewStyle, NSLayoutConstraint, NSString, UIActivityIndicatorView, UIImageView;

@interface GLUEOfflineSyncStatusView : UIView <GLUEStyleable, GLUEReusable>
{
    long long _status;
    GLUEOfflineSyncStatusViewStyle *_style;
    UIView *_offlineStatusContentView;
    UIImageView *_imageView;
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_contentViewWidthConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewWidthConstraint; // @synthesize contentViewWidthConstraint=_contentViewWidthConstraint;
@property(readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIView *offlineStatusContentView; // @synthesize offlineStatusContentView=_offlineStatusContentView;
@property(copy, nonatomic) GLUEOfflineSyncStatusViewStyle *style; // @synthesize style=_style;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)glue_applyStyle:(id)arg1;
- (void)updateActivityIndicatorTransform;
- (void)updateConstraints;
- (void)updateImageViewWithStatus;
- (void)updateViewWithStatus;
- (void)prepareForReuse;
- (void)addViewConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


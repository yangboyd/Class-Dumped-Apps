//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAlertViewActionController-Protocol.h"

@class NSDate, NSString, NSTimer, SCGalleryLockedRateLimitView;
@protocol SCGalleryLockedRateLimitControllerDelegate;

@interface SCGalleryLockedRateLimitController : NSObject <SCAlertViewActionController>
{
    NSTimer *_timer;
    SCGalleryLockedRateLimitView *_rateLimitView;
    NSString *_title;
    NSString *_description;
    NSDate *_allowedFutureDate;
    id <SCGalleryLockedRateLimitControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCGalleryLockedRateLimitControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDate *allowedFutureDate; // @synthesize allowedFutureDate=_allowedFutureDate;
- (void).cxx_destruct;
- (_Bool)requiresAdditionalPaddingIfLastItem;
- (struct UIEdgeInsets)edgeInsets;
- (void)becomeFirstResponder;
- (_Bool)adjustsSizeToMatchStandard;
- (unsigned long long)alertViewActionType;
- (id)actionView;
- (struct CGSize)actionViewSize;
- (unsigned long long)_expirationMinutesFromAllowedFutureDate;
- (void)_timerFired:(id)arg1;
@property(readonly, nonatomic) _Bool isAnimating;
- (void)stopAnimating;
- (void)startAnimating;
- (id)view;
- (void)setTitleAndDescription:(long long)arg1 topSecret:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


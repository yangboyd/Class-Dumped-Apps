//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAPassThroughPresentationController.h>

@class WAMultiSendContentPickerBackgroundView;

@interface WAMultiSendContentPickerPresentationController : WAPassThroughPresentationController
{
    WAMultiSendContentPickerBackgroundView *_backgroundView;
}

@property(readonly, nonatomic) WAMultiSendContentPickerBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)containerViewWillLayoutSubviews;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 backgroundView:(id)arg3;

@end


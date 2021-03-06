//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGVideoCallPoorCallSurveyFreeformViewDelegate-Protocol.h>

@class IGVideoCallLoggingContext, IGVideoCallPoorCallSurveyFreeformView, NSString;
@protocol IGVideoCallPoorCallSurveyDelegate;

@interface IGVideoCallPoorCallSurveyFreeformViewController : UIViewController <IGVideoCallPoorCallSurveyFreeformViewDelegate, IGGestureHandler>
{
    id <IGVideoCallPoorCallSurveyDelegate> _delegate;
    IGVideoCallPoorCallSurveyFreeformView *_freeformView;
    IGVideoCallLoggingContext *_loggingContext;
    long long _issue;
    long long _issueDetail;
}

- (void).cxx_destruct;
- (void)freeformiewDidChangeContentSize:(id)arg1;
- (void)freeformViewDidTapSendFeedbackButton:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDelegate:(id)arg1 loggingContext:(id)arg2 issue:(long long)arg3 issueDetail:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


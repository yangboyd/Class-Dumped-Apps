//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserVerificationContext, SOJULoginResponse;
@protocol SCUIContainer, SCUserVerificationWorkflowDelegate;

@interface SCUserVerificationScope : NSObject
{
    id <SCUserVerificationWorkflowDelegate> _delegate;
    id <SCUIContainer> _uiContainer;
    SOJULoginResponse *_loginResponse;
    SCUserVerificationContext *_context;
}

@property(readonly, nonatomic) SCUserVerificationContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) SOJULoginResponse *loginResponse; // @synthesize loginResponse=_loginResponse;
@property(readonly, nonatomic) __weak id <SCUIContainer> uiContainer; // @synthesize uiContainer=_uiContainer;
@property(readonly, nonatomic) __weak id <SCUserVerificationWorkflowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)initWithUIContainer:(id)arg1 delegate:(id)arg2 loginResponse:(id)arg3 context:(id)arg4;

@end


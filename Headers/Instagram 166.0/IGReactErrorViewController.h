//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>

@class IGReactErrorView, NSString;

@interface IGReactErrorViewController : IGViewController <IGGestureHandler>
{
    IGReactErrorView *_errorView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGReactErrorView *errorView; // @synthesize errorView=_errorView;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)viewDidLoad;
- (id)initWithErrorMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


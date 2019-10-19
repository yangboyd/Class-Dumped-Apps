//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "YTPlayerOverlayErrorViewDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSError, NSString, YTPlayerOverlayErrorView;
@protocol YTResponder;

@interface YTPlayerOverlayErrorViewController : UIViewController <YTPlayerOverlayErrorViewDelegate, YTResponder>
{
    NSError *_error;
    YTPlayerOverlayErrorView *_errorView;
    id <YTResponder> _parentResponder;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)shouldShowErrorBackgroundImage:(id)arg1;
- (void)overlayErrorViewDidPressRetry:(id)arg1;
- (void)setError:(id)arg1;
- (void)loadView;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOAlertViewDelegate.h"
#import "YTMDXPreviewViewDelegate.h"
#import "YTResponder.h"

@class GIMMe, NSString, YTActivityWaitViewController, YTAlertView, YTPlayerResponse, YTPlayerService, YTWatchTransition;

@interface YTMDXPreviewController : NSObject <GOOAlertViewDelegate, YTMDXPreviewViewDelegate, YTResponder>
{
    YTPlayerService *_playerService;
    YTWatchTransition *_watchTransition;
    YTAlertView *_dialog;
    YTPlayerResponse *_playerResponse;
    _Bool _dialogWasHidden;
    YTActivityWaitViewController *_waitViewController;
    id <YTResponder> _parentResponder;
    id <YTMDXPreviewControllerDelegate> _delegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTMDXPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)isHandlingFullPlaylist;
- (void)loadPlayerResponse;
- (void)fillDialog;
- (void)fillDialogQuick;
- (void)didTapPlay;
- (void)didTapTVQueue;
- (void)alertViewDidDisappear:(id)arg1;
- (void)hideDialog;
- (void)showDialog;
- (void)dealloc;
- (id)initWithWatchTransition:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


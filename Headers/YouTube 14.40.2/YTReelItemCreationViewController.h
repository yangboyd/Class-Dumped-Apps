//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "GOOTextFieldValidator.h"
#import "UITextFieldDelegate.h"
#import "YTTopController.h"

@class GIMMe, MDCKeyboardWatcher, NSString, YTEditMetadataTitleValidator, YTIReelCreationMetadataEndpoint, YTReelItemCreationViewControllerView, YTThumbnailController;

@interface YTReelItemCreationViewController : YTStyledViewController <GOOTextFieldValidator, UITextFieldDelegate, YTTopController>
{
    MDCKeyboardWatcher *_keyboardWatcher;
    YTIReelCreationMetadataEndpoint *_model;
    id <YTReelThumbnailResponderProvider> _thumbnailProvider;
    YTEditMetadataTitleValidator *_titleValidator;
    YTThumbnailController *_thumbnailController;
}

- (void).cxx_destruct;
- (void)registerNotifications;
- (void)handleReelMetadataUpdateError:(id)arg1 status:(int)arg2 firstResponder:(id)arg3;
- (void)handleReelCreationWithTitle:(id)arg1;
- (void)tappedDone;
- (void)tappedCancel;
- (void)setUpTitleValidator;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)validationResultsForTextField:(id)arg1;
- (void)keyboardDidChangeFrame;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak GIMMe *gimme;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTReelItemCreationViewControllerView *view; // @dynamic view;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class DeviceNameView, NSString;

@interface DeviceNameViewController : UIViewController <UITextFieldDelegate>
{
    DeviceNameView *_deviceNameView;
    NSString *_deviceTypeName;
    _Bool _isStereoPair;
    NSString *_buttonText;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)willHideKeyboard:(id)arg1;
- (void)willShowKeyboard:(id)arg1;
- (void)unregisterForKeyboardNotifications;
- (void)registerForKeyboardNotifications;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)didTapDone;
- (void)scrollSelectedTextViewToVisible;
- (_Bool)saveCurrentNameIfValid;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithName:(id)arg1 deviceTypeName:(id)arg2 isStereoPair:(_Bool)arg3 doneButtonText:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


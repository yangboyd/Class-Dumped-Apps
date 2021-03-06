//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/HATSCollectionViewController.h>

#import <drive_extension_framework/GOOTextFieldValidator-Protocol.h>

@class GOOMultilineTextFieldContentViewObject, NSString;

@interface HATSOpenTextCollectionViewController : HATSCollectionViewController <GOOTextFieldValidator>
{
    GOOMultilineTextFieldContentViewObject *_questionContentViewObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GOOMultilineTextFieldContentViewObject *questionContentViewObject; // @synthesize questionContentViewObject=_questionContentViewObject;
- (void)handleKeyboardDismissGesture:(id)arg1;
- (id)validationResultsForTextField:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) long long announcementFrequency;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

